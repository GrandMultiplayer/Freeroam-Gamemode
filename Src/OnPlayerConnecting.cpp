#include "sdk/GrandM.h"

// When a player connects (still syncing with the server)	
extern "C" DLL_PUBLIC bool API_OnPlayerConnecting(Objects::Entity player)
{
	return true;
}