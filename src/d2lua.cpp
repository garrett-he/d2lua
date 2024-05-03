#include <exception>
#include "d2lua.h"

D2Lua::D2Lua(HMODULE hModule)
{
    TCHAR path[MAX_PATH];

    if (!::GetModuleFileName(hModule, path, MAX_PATH)) {
        throw std::exception("Cannot get filename of d2lua module.");
    }

    module = hModule;
    dllName = std::string(path);

    L = luaL_newstate();
    luaL_openlibs(L);

    auto entryFile = dllName.substr(0, dllName.find_last_of('\\')) + "\\main.lua";
    luaL_dofile(L, entryFile.c_str());
}