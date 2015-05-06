#include "Player.h"
#include <initializer_list>
Player::Player(): _armor(ArmorHandler())
{
_armor.addArmor(std::make_shared<NoArmor>());
_armor.equipArmor(0);
}

const ArmorHandler Player::getArmorHandler()
{
    return _armor;
}

void Player::equipArmor(int armorPos)
{
    _armor.equipArmor(armorPos);
    std::cout << _armor.getCurrentArmorType() << " has been Equipped." << std::endl << std::endl;
}

void Player::listOwnedItems()
{
    std::cout << "List of owned items:" << std::endl << std::endl;
    _armor.listOwnedArmors();
    std::cout << std::endl;
}

void Player::listCurrentStats()
{
    std::cout << "List of Current Statistics:" << std::endl << std::endl;
    _armor.listCurrentStats();
    std::cout << std::endl;
}

void Player::addItem(std::shared_ptr<Armor> armor)
{
    _armor.addArmor(armor);
}
