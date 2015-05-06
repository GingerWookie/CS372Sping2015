#include "Player.h"
#include <initializer_list>
Player::Player(): _armor(ArmorHandler()), _weapon(WeaponHandler())
{
_armor.addArmor(std::make_shared<NoArmor>());
_armor.equipArmor(0);
_weapon.addWeapon(std::make_shared<NoWeapon>());
_weapon.equipWeapon(0);

}

const ArmorHandler Player::getArmorHandler()
{
    return _armor;
}

const WeaponHandler Player::getWeaponHandler()
{
    return _weapon;
}

void Player::equipArmor(int armorPos)
{
    _armor.equipArmor(armorPos);
    std::cout << _armor.getCurrentArmorType() << " has been Equipped." << std::endl << std::endl;
}

void Player::equipWeapon(int weaponPos)
{
    _weapon.equipWeapon(weaponPos);
    std::cout << _weapon.getCurrentWeaponType() << " has been Equipped." << std::endl << std::endl;
}

void Player::listOwnedItems()
{
    std::cout << "List of owned items:" << std::endl << std::endl;
    _armor.listOwnedArmors();
    _weapon.listOwnedWeapons();
    std::cout << std::endl;
}

void Player::listCurrentStats()
{
    std::cout << "List of Current Statistics:" << std::endl << std::endl;
    _armor.listCurrentStats();
    _weapon.listCurrentStats();
    std::cout << std::endl;
}

void Player::addItem(std::shared_ptr<Armor> armor)
{
    _armor.addArmor(armor);
}

void Player::addItem(std::shared_ptr<Weapon> weapon)
{
    _weapon.addWeapon(weapon);
}
