#include <Windows.h>
#include <d2loader/plugin.h>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    return TRUE;
}

DWORD __stdcall PluginEntry(DWORD dwReason, LPVOID pData) {
    return TRUE;
}

LPPLUGIN_INTERFACE __stdcall QueryInterface() {
    static PLUGIN_INTERFACE Interface = { PLUGIN_MAGICWORD, PLUGIN_VERSION, "D2LUA", PluginEntry };
    return &Interface;
}