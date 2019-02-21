#include "sdk/GrandM.h"

// Called when a player leaves the server
/// <param name="reason">The reason the player disconnected,  0 = Left, 1 = Timeout, 2 = Kicked, 3 = Banned</param>
extern "C" DLL_PUBLIC void API_OnPlayerDisconnected(Objects::Entity entity, int reason)
{

}