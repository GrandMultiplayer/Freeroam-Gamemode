// API Function Imports
#include "sdk/GrandM.h"

// When Plugin gets loaded
extern "C" DLL_PUBLIC bool API_Initialize(void)
{
	return true;
}

// When plugin gets unloaded
extern "C" DLL_PUBLIC bool API_Close(void)
{
	return true;
}

// Every server tick this gets called
extern "C" DLL_PUBLIC bool API_OnTick(void)
{
	return true;
}