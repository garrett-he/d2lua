#include "ld2api.h"
#include "d2func.h"

LPCWSTR c2w(LPCSTR str);

static int d2_PrintMessageAtTop(lua_State *L)
{
    const char *msg = luaL_optstring(L, 1, NULL);
    const char *pos = luaL_optstring(L, 2, "TOP");
    lua_Integer color = luaL_optinteger(L, 3, 0);

    if (msg == NULL) {
        return 0;
    }

    fnPrintMessageAtTop(c2w(msg), (DWORD) color);
    return 0;
}

LPCWSTR c2w(LPCSTR str)
{
    int length = strlen(str) + 1;
    LPWSTR t = (LPWSTR) malloc(sizeof(WCHAR) * length);

    memset(t, 0, length * sizeof(WCHAR));

    MultiByteToWideChar(CP_ACP, 0, str, strlen(str), t, length);

    return t;
}

LUAMOD_API int luaopen_d2api(lua_State *L)
{
    lua_register(L, "PrintMessageAtTop", d2_PrintMessageAtTop);

    return 1;
}

