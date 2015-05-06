#include "WeaponHandler.h"

WeaponHandler::WeaponHandler()
{}

void WeaponHandler::addWeapon(std::shared_ptr<Weapon> weapon)
{
    _ownedWeapons.push_back(weapon);
}

void WeaponHandler::listOwnedWeapons()
{
    int position = 0;
    std::cout << "  List of owned Weapons:" << std::endl;
    for(auto weapon : _ownedWeapons)
    {
        std::cout << "      Position: " << position << " WeaponType: " << weapon->getWeaponType() << " Damage: " << weapon->getDamage() << std::endl;
        ++position;
    }
}

void WeaponHandler::equipWeapon(int position)
{
    _currentWeapon = _ownedWeapons[position];
}

void WeaponHandler::listCurrentStats()
{
    std::cout << "  Current Weapon Statistics:" << std::endl;
    std::cout << "      WeaponType: " << getCurrentWeaponType() << " AC: " << getCurrentDamage() << std::endl;
}

std::string WeaponHandler::getCurrentWeaponType()
{
    return _currentWeapon->getWeaponType();
}

int WeaponHandler::getCurrentDamage()
{
    return _currentWeapon->getDamage();
}

std::shared_ptr<Weapon> WeaponHandler::getCurrentWeapon()
{
    return _currentWeapon;
}
