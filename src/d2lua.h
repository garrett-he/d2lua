#ifndef __D2LUA_H__
#define __D2LUA_H__

#include <Windows.h>
#include <string>
#include "lua.hpp"

class D2Lua
{
public:
    HMODULE module;
    std::string dllName;
public:
    explicit D2Lua(HMODULE);
private:
    lua_State* L;
};

#endif // __D2LUA_H__
