/* This file is part of the Cyclone Library.
   Copyright (C) 2001 Greg Morrisett

   This library is free software; you can redistribute it and/or it
   under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of
   the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place, Suite
   330, Boston, MA 02111-1307 USA. */

#ifndef _EXECINFO_H
#define _EXECINFO_H

namespace Execinfo {
  int backtrace(int ?, int);

  // Cyclone-specific: If a backtrace is available (as under Linux),
  // print it to stdout and return 0.  Else print nothing and return
  // nonzero.
  int bt(void);

  void print_stacktrace();
}  // namespace Execinfo

#endif
