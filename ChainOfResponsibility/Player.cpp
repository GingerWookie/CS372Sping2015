#include "Player.h"
#include <initializer_list>
Player::Player(): _armor(std::unique_ptr<ArmorHandler>())
{
_armor->addArmor(std::shared_ptr<NoArmor>());
_armor->equipArmor(0);
}

std::shared_ptr<Armor> Player::getCurrentArmor()
{
    return _armor->getCurrentArmor();
}

std::string Player::getCurrentArmorType()
{
    return _armor->getCurrentArmorType();
}

int Player::getCurrentAC()
{
    return _armor->getCurrentAC();
}

void Player::equipArmor(int armorPos)
{
    _armor->equipArmor(armorPos);
}

void Player::listOwnedArmors()
{
    _armor->listOwnedArmors();
}

void Player::addArmor(std::shared_ptr<Armor> armor)
{
    _armor->addArmor(move(armor));
}
