#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <memory>
#include "Armor.h"
#include "PremadeArmor.h"
#include "ArmorHandler.h"
#include "Weapon.h"
#include "PreamadeWeapon.h"
#include "WeaponHandler.h"



class Player
{
public:
    Player();
    ~Player() = default;
    const ArmorHandler getArmorHandler();
    const WeaponHandler getWeaponHandler();
    void equipArmor(int);
    void equipWeapon(int);
    void listOwnedItems();
    void listCurrentStats();
    void addItem(std::shared_ptr<Armor>);
    void addItem(std::shared_ptr<Weapon>);
protected:
private:
    ArmorHandler _armor;
    WeaponHandler _weapon;
};

#endif // PLAYER_H
