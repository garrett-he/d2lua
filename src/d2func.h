#ifndef __D2LUA_D2FUNC_H__
#define __D2LUA_D2FUNC_H__

#include <Windows.h>

typedef void __fastcall fnPrintMessageAtTop_t(LPCWSTR, DWORD);

extern fnPrintMessageAtTop_t *fnPrintMessageAtTop;

#endif // __D2LUA_D2FUNC_H__