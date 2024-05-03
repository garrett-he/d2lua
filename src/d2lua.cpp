#include "d2lua.h"
#include <exception>

D2Lua::D2Lua(HMODULE hModule)
{
    TCHAR path[MAX_PATH];

    if (!::GetModuleFileName(hModule, path, MAX_PATH)) {
        throw std::exception("Cannot get filename of d2lua module.");
    }

    module = hModule;
    dllName = std::string(path);
}