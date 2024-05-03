#ifndef __D2LUA_H__
#define __D2LUA_H__

#include <Windows.h>
#include <string>

class D2Lua
{
public:
    HMODULE module;
    std::string dllName;
public:
    explicit D2Lua(HMODULE);
};

#endif // __D2LUA_H__
