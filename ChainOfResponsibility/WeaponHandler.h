#ifndef WEAPONHANDLER_H
#define WEAPONHANDLER_H

#include <vector>
#include <memory>
#include <iostream>
#include <string>
#include "Weapon.h"


class WeaponHandler
{
public:
    WeaponHandler();
    ~WeaponHandler() = default;
    void addWeapon(std::shared_ptr<Weapon>);
    void listOwnedWeapons();
    void equipWeapon(int);
    void listCurrentStats();
    std::string getCurrentWeaponType();
    int getCurrentDamage();
    std::shared_ptr<Weapon> getCurrentWeapon();
protected:
private:
    std::vector<std::shared_ptr<Weapon>> _ownedWeapons;
    std::shared_ptr<Weapon> _currentWeapon;
};

#endif // WEAPONHANDLER_H
