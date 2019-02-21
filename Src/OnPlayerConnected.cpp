#include "sdk/GrandM.h"

// When the player is successfully connected (loaded in, but not spawned yet)
extern "C" DLL_PUBLIC bool API_OnPlayerConnected(Objects::Entity player)
{
	return true;
}