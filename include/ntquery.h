/*
 * Copyright 2006 Mike McCormack
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_NTQUERY_H__
#define __WINE_NTQUERY_H__

#include <pshpack4.h>

typedef struct _CI_STATE
{
    DWORD cbStruct;
    DWORD cWordList;
    DWORD cPersistentIndex;
    DWORD cQueries;
    DWORD cDocuments;
    DWORD cFreshTest;
    DWORD dwMergeProgress;
    DWORD eState;
    DWORD cFilteredDocuments;
    DWORD cTotalDocuments;
    DWORD cPendingScans;
    DWORD dwIndexSize;
    DWORD cUniqueKeys;
    DWORD cSeqQDocuments;
    DWORD dwPropCacheSize;
} CI_STATE;

#include <poppack.h>

STDAPI CIState(WCHAR const *, WCHAR const *, CI_STATE *);

#endif
