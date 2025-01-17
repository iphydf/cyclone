#include "runtime_internal.h"

#include <dlfcn.h>
#include <stdlib.h>
#include <string.h>
#include <libunwind.h>

_Cyc_Stacktrace *_cyc_get_stacktrace(void) {
    _Cyc_Stacktrace *stacktrace = malloc(sizeof(_Cyc_Stacktrace));
    stacktrace->size = 0;

    unw_cursor_t cursor;
    unw_context_t context;

    unw_getcontext(&context);
    unw_init_local(&cursor, &context);

    while (unw_step(&cursor) > 0) {
        unw_word_t offset, pc;
        unw_get_reg(&cursor, UNW_REG_IP, &pc);
        char name[256];
        unw_get_proc_name(&cursor, name, sizeof(name), &offset);

        size_t name_size = strlen(name) + 1;
        char *name_copy = malloc(name_size);
        if (name_copy == NULL) {
            break;
        }
        memcpy(name_copy, name, name_size);

        stacktrace->frames[stacktrace->size] = name_copy;
        stacktrace->size++;
    }

    return stacktrace;
}

void _cyc_free_stacktrace(_Cyc_Stacktrace *stacktrace) {
    if (stacktrace == NULL) {
        return;
    }
    for (int i = 0; i < stacktrace->size; i++) {
        free(stacktrace->frames[i]);
    }
    free(stacktrace);
}
