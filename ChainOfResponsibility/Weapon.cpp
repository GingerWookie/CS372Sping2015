#include "Weapon.h"

Weapon::Weapon(int damage, std::string weaponType): _damage(damage), _weaponType(weaponType)
{}

void Weapon::setWeaponType(std::string weaponType)
{
    _weaponType = weaponType;
}
std::string Weapon::getWeaponType()
{
    return _weaponType;
}
void Weapon::setDamage(int damage)
{
    _damage = damage;
}
int Weapon::getDamage()
{
    return _damage;
}
