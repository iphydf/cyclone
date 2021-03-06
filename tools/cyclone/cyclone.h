/* Header file for the top module (nothing to export)
   Copyright (C) 2001 Dan Grossman.
   This file is part of the Cyclone compiler.

   The Cyclone compiler is free software; you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   The Cyclone compiler is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with the Cyclone compiler; see the file COPYING. If not,
   write to the Free Software Foundation, Inc., 59 Temple Place -
   Suite 330, Boston, MA 02111-1307, USA. */
#ifndef _CYCLONE_H_
#define _CYCLONE_H_

#include "cyclone/library/std/core.h"
#include "cyclone/library/std/list.h"

#include "cyclone/library/compiler/absyn.h"

namespace Cyclone {
  List::list_t<Absyn::decl_t> parse_file(string_t<`H> filename);
}

#endif
