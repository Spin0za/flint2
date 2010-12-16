/*=============================================================================

    This file is part of FLINT.

    FLINT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    FLINT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FLINT; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

=============================================================================*/
/******************************************************************************

    Copyright (C) 2008, 2009 William Hart
    Copyright (C) 2010 Sebastian Pancratz

******************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <mpir.h>

#include "flint.h"
#include "fmpz.h"
#include "fmpz_poly.h"

void _fmpz_poly_printf(FILE * file, const fmpz * poly, long len)
{
    long i;

    fprintf(file, "%li", len);
    if (len > 0)
    {
        fprintf(" ");
        for (i = 0; i < len; i++)
        {
            fprintf(" ");
            fmpz_printf(file, poly + i);
        }
    }
}

void fmpz_poly_printf(FILE * file, const fmpz_poly_t poly)
{
    _fmpz_poly_printf(file, poly->coeffs, poly->length);
}

