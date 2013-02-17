//----------------------------------------------------------------------------
/// \file  defaults.ipp
//----------------------------------------------------------------------------
/// \brief common global functions implementation
//----------------------------------------------------------------------------
// Copyright (c) 2010 Serge Aleynikov <saleyn@gmail.com>
// Created: 2010-09-20
//----------------------------------------------------------------------------
/*
***** BEGIN LICENSE BLOCK *****

This file is part of the eixx (Erlang C++ Interface) Library.

Copyright (C) 2010 Serge Aleynikov <saleyn@gmail.com>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

***** END LICENSE BLOCK *****
*/

#ifndef _EIXX_DEFAULTS_IPP
#define _EIXX_DEFAULTS_IPP

namespace EIXX_NAMESPACE {

    const char* type_to_string(eterm_type a_type) {
        switch (a_type) {
            case LONG  : return "LONG";
            case DOUBLE: return "DOUBLE";
            case BOOL  : return "BOOL";
            case ATOM  : return "ATOM";
            case STRING: return "STRING";
            case BINARY: return "BINARY";
            case PID   : return "PID";
            case PORT  : return "PORT";
            case REF   : return "REF";
            case VAR   : return "VAR";
            case TUPLE : return "TUPLE";
            case LIST  : return "LIST";
            case TRACE : return "TRACE";
            default    : return "UNDEFINED";
        }
    }

} // namespace EIXX_NAMESPACE

#endif // _EIXX_DEFAULTS_IPP
