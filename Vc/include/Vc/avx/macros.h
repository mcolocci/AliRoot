/*  This file is part of the Vc library.

    Copyright (C) 2009-2011 Matthias Kretz <kretz@kde.org>

    Vc is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    Vc is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with Vc.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "../common/macros.h"

#ifndef VC_AVX_MACROS_H
#define VC_AVX_MACROS_H
#undef VC_AVX_UNDOMACROS_H

#ifndef _M256
# define _M256 __m256
#endif

#ifndef _M256I
# define _M256I __m256i
#endif

#ifndef _M256D
# define _M256D __m256d
#endif

#endif // VC_AVX_MACROS_H
