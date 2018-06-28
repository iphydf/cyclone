
  #include <sys/types.h>
  #if defined(__APPLE__)
  #include <netinet/in.h>
  #include <stdint.h>
  #endif
  #include <arpa/inet.h>
  uint32_t __stub_htonl(uint32_t x) {
    return htonl(x);
  }
  uint16_t __stub_htons(uint16_t x) {
    return htons(x);
  }
  uint32_t __stub_ntohl(uint32_t x) {
    return ntohl(x);
  }
  uint16_t __stub_ntohs(uint16_t x) {
    return ntohs(x);
  }

  void *cast_dlsym (void *sym) { return sym; }

  /* OS X needs sys/types.h before dirent.h */
  #include <sys/types.h>
  #include <dirent.h>
  struct Cyc___cycDIR { // must match defn in cyclone stub
    DIR *dir;
  };

  // We do this because errno is probably a C macro that refers to
  // a C function, and buildlib's closure algorithm does not properly
  // declare an indirectly-needed C function as extern "C".
  // Also, if it's a macro we don't want a declaration for it in Cyclone,
  // but we don't have a nice way of suppressing this with buildlib.
  #include <errno.h>
  int *__CYCLONE_ERRNO() {
    return &errno;
  }

  #include <setjmp.h> // Needed by precore_c.h
  #include "precore_c.h"
  #include <fcntl.h>
  int fcntl_with_arg(int fd, int cmd, long arg) {
    return fcntl(fd, cmd, arg);
  }
  // We call lock a void* so we don't have to #include anything else
  int fcntl_with_lock(int fd, int cmd, void *lock) {
    return fcntl(fd, cmd, lock);
  }

  int open_with_mode(const char * s, int flags, mode_t m) {
    return open(s,flags,m);
  }

  int open_without_mode(const char * s, int flags) {
    /* Use 0 as the mode argument, in case flags contains O_CREAT.  In
       that case the file will be created with 0 permissions; if we
       omitted the 0 it would be created with random permissions. */
    return open(s,flags,0);
  }

#include <stdio.h>
extern void GC_free(void *ptr);
extern void _pop_handler();
extern void _push_handler(struct _handler_cons *h);
extern void*Cyc_Core_get_exn_thrown(void);
extern const char *Cyc_Core_get_exn_filename(void);
extern int Cyc_Core_get_exn_lineno();
struct __pair {
  void * (*cycf)(void *);
  void *arg;
};
void *pthread_cycfun_wrap(struct __pair *arg) {
  struct _handler_cons h;
  void *res = 0;
  int status = 0;
  char *exn_name = NULL;
  void *(*cycf)(void *) = arg->cycf;
  void *cycarg = arg->arg;
  GC_free(arg);
  _push_handler(&h);
  if (setjmp(h.handler)) status = 1;
  if (!status) {
     res = cycf (cycarg);
     _pop_handler();
   } else {
     void*exn_thrown = Cyc_Core_get_exn_thrown();
     const char *exn_filename = Cyc_Core_get_exn_filename();
     int exn_lineno = Cyc_Core_get_exn_lineno();
     exn_name = *(char**)exn_thrown;
     fprintf(stderr,"Uncaught exception %s thrown from thread around %s:%d\n",exn_name,
	     exn_filename,exn_lineno);
  }
  return res;
}

  #include <signal.h>
  typedef void *Cyc_sigarg_t;
  void Cyc_SIG_DFL(int ignore) { return; }
  void Cyc_SIG_ERR(int ignore) { return; }
  void Cyc_SIG_IGN(int ignore) { return; }
  #ifdef SIG_HOLD
  void Cyc_SIG_HOLD(int ignore) { return; }
  #endif

  // This takes a C sighandler_t and turns it into a Cyclone sigarg_t
  Cyc_sigarg_t sigarg_wrap(void (*f)(int)) {
    if (f == SIG_DFL)  return Cyc_SIG_DFL;
    if (f == SIG_ERR)  return Cyc_SIG_ERR;
    if (f == SIG_IGN)  return Cyc_SIG_IGN;
  #ifdef SIG_HOLD
    if (f == SIG_HOLD) return Cyc_SIG_HOLD;
  #endif
    return f;
  }

  // This takes a Cyclone sigarg_t and turns it into a C sighandler_t
  void (*sigarg_unwrap(Cyc_sigarg_t f))(int) {
    if (f == Cyc_SIG_DFL)  return SIG_DFL;
    if (f == Cyc_SIG_ERR)  return SIG_ERR;
    if (f == Cyc_SIG_IGN)  return SIG_IGN;
  #ifdef SIG_HOLD
    if (f == Cyc_SIG_HOLD) return SIG_HOLD;
  #endif
    return f;
  }

  Cyc_sigarg_t signal_SIG_DFL(int a) { return sigarg_wrap(signal(a,SIG_DFL)); }
  Cyc_sigarg_t signal_SIG_ERR(int a) { return sigarg_wrap(signal(a,SIG_ERR)); }
  Cyc_sigarg_t signal_SIG_IGN(int a) { return sigarg_wrap(signal(a,SIG_IGN)); }
  #ifdef SIG_HOLD
  Cyc_sigarg_t signal_SIG_HOLD(int a) { return sigarg_wrap(signal(a,SIG_HOLD)); }
  #endif
  Cyc_sigarg_t signal_SIG_HANDLER(int a, void (*f)(int)) {
    return sigarg_wrap(signal(a,f));
  }

  #include <string.h>
  #include <stdio.h>

  struct sigaction *sigaction_wrap(struct sigaction *f) {
    f->sa_handler = sigarg_wrap(f->sa_handler);
    return f;
  }
  struct sigaction *sigaction_unwrap(struct sigaction *f) {
    f->sa_handler = sigarg_unwrap(f->sa_handler);
    return f;
  }
  // hack to allow a user to initialize a sigaction
  struct sigaction fresh_sigaction() {
    struct sigaction sa;
    memset(&sa,0,sizeof(struct sigaction));
    return sa;
  }

  #include <stdio.h>
  // Define struct __cycFILE
  struct Cyc___cycFILE { // must match defn in cyclone stub
    FILE *file;
  };

  #include <stdlib.h>

  FILE *_sfile_to_file(struct Cyc___cycFILE *sf) {
    if(!sf) {
      fprintf(stderr,"Attempt to access null file descriptor.\n");
      exit(255);
    }
    if(!sf->file)
      _throw(Cyc_Null_Exception); // FIX:  should be more descriptive?
    return sf->file;
  }
  int Cyc_file_string_read(struct Cyc___cycFILE *sf,
                                 struct _fat_ptr dest,
                                 int dest_offset, int max_count) {
    unsigned char *new_curr = dest.curr + dest_offset;
    size_t sz = dest.last_plus_one - new_curr;
    FILE *fd = _sfile_to_file(sf);
    if (new_curr < dest.base || new_curr >= dest.last_plus_one)
      _throw(Cyc_Null_Exception);
    if(dest_offset + max_count > sz) {
      fprintf(stderr,"Attempt to read off end of string.\n");
      exit(255);
    }
    return fread(new_curr, 1, max_count, fd);
  }
  int Cyc_file_string_write(struct Cyc___cycFILE *sf,
                                  struct _fat_ptr src,
                                  int src_offset, int max_count) {
    size_t sz = src.last_plus_one - src.curr;
    unsigned char *new_curr = src.curr + src_offset;
    FILE *fd = _sfile_to_file(sf);
    if (new_curr < src.base || new_curr >= src.last_plus_one)
      _throw(Cyc_Null_Exception);
    if(src_offset + max_count > sz) {
      fprintf(stderr,"Attempt to write off end of string.\n");
      exit(255);
    }
    return fwrite(new_curr, 1, max_count, fd);
  }

  #include <sys/types.h>
  #include <sys/mman.h>
  #ifndef MMAP_FAILED
  #define MMAP_FAILED NULL
  #endif
  char *__stub_mmap(char *start, size_t length, int prot,
                    int flags, int fd, off_t offset) {
    char *retval;
    retval = mmap(start,length,prot,flags,fd,offset);
    if (retval == MMAP_FAILED) return NULL;
    else return retval;
  }

  #include <sys/select.h>
  void __stub_FD_CLR(int a, fd_set *b) {
    FD_CLR(a,b);
  }
  int __stub_FD_ISSET(int a, fd_set *b) {
    return FD_ISSET(a,b);
  }
  void __stub_FD_SET(int a, fd_set *b) {
    FD_SET(a,b);
  }
  void __stub_FD_ZERO(fd_set *a) {
    FD_ZERO(a);
  }

  #include <sys/socket.h>
  #include <netinet/in.h>

  int accept_in(int a, const struct sockaddr_in *b, socklen_t *c) {
    return accept(a,(struct sockaddr *)b,c);
  }

  int bind_in(int a, const struct sockaddr_in *b, socklen_t c) {
    return bind(a,(struct sockaddr *)b,c);
  }

  int connect_in(int a, const struct sockaddr_in *b, socklen_t c) {
    return connect(a,(struct sockaddr *)b,c);
  }

  int getpeername_in(int a, const struct sockaddr_in *b, socklen_t *c) {
    return getpeername(a,(struct sockaddr *)b,c);
  }

  int getsockname_in(int a, const struct sockaddr_in *b, socklen_t *c) {
    return getsockname(a,(struct sockaddr *)b,c);
  }

  /* sys/time.h is needed on some systems (OS X) for struct timeval */
  #include <sys/time.h>
  int getsockopt_int(int a, int b, int c, int *d, socklen_t *e) {
    return getsockopt(a,b,c,d,e);
  }
  int getsockopt_timeval(int a, int b, int c, struct timeval *d, socklen_t *e) {
    return getsockopt(a,b,c,d,e);
  }

  ssize_t recv_wrapped(int a, struct _fat_ptr b, size_t c, int d) {
    // JGM: -- it's okay to pass in NULL if c == 0
    unsigned char *p = b.curr; // _check_fat_subscript(b,1,0);
    unsigned n = _get_fat_size(b,1);
    if (n<c) _throw_arraybounds();
    return recv(a,p,c,d);
  }

  ssize_t recvfrom_in(int a, struct _fat_ptr b, size_t c, int d,
                      const struct sockaddr_in *e, socklen_t *f) {
    // JGM: -- it's okay to pass in NULL if c == 0
    unsigned char *p = b.curr; // _check_fat_subscript(b,1,0);
    unsigned n = _get_fat_size(b,1);
    if (n<c) _throw_arraybounds();
    return recvfrom(a,p,c,d,(struct sockaddr *)e,f);
  }

  ssize_t send_wrapped(int a, struct _fat_ptr b, size_t c, int d) {
    // JGM: -- it's okay to pass in NULL if c == 0
    unsigned char *p = b.curr; // _check_fat_subscript(b,1,0);
    unsigned n = _get_fat_size(b,1);
    if (n<c) _throw_arraybounds();
    return send(a,p,c,d);
  }

  ssize_t sendto_in(int a, struct _fat_ptr b, size_t c, int d,
                    const struct sockaddr_in *e, socklen_t f) {
    // JGM: -- it's okay to pass in NULL if c == 0
    unsigned char *p = b.curr; // _check_fat_subscript(b,1,0);
    unsigned n = _get_fat_size(b,1);
    if (n<c) _throw_arraybounds();
    return sendto(a,p,c,d,(struct sockaddr *)e,f);
  }

  int setsockopt_int(int a, int b, int c, const int *d, socklen_t e) {
    return setsockopt(a,b,c,d,e);
  }
  int setsockopt_timeval(int a, int b, int c, const struct timeval *d, socklen_t e) {
    return setsockopt(a,b,c,d,e);
  }
  int setsockopt_linger(int a, int b, int c, const struct linger *d, socklen_t e) {
    return setsockopt(a,b,c,d,e);
  }

  #include <syslog.h>
  void __syslog_str(int x, const char *y) {
    syslog(x, "%s", y);
  }
