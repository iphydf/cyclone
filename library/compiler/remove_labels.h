/* Part of the Cyclone compiler: remove unused labels
   Copyright (C) 2004 Dan Grossman, Ben Hindman, AT&T
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

#ifndef _REMOVE_LABELS_H
#define _REMOVE_LABELS_H
#include "absyn.h"

namespace RemoveLabels {
  List::list_t<Absyn::decl_t> remove_unused_labels(List::list_t<Absyn::decl_t,`H>);
}

#endif
