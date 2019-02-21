#include "sdk/GrandM.h"

// Called when a entity has just taken damage
extern "C" DLL_PUBLIC const bool API_OnEntityDamage(Objects::Entity entity, const int damage, Objects::Entity attacker, const std::string weapon)
{

	// Return True to allow server to handle and sync the damage
	// Return False to block damage sync
	return true;
}