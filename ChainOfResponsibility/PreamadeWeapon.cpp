#include "PreamadeWeapon.h"

Dagger::Dagger(): Weapon(2, "Dagger")
{}

ShortSword::ShortSword(): Weapon(5, "Short Sword")
{}

LongSword::LongSword(): Weapon(10, "Long Sword")
{}

NoWeapon::NoWeapon(): Weapon(0, "No Weapon")
{}
