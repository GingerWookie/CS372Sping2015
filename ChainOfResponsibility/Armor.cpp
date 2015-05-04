#include "Armor.h"

std::string Armor::getArmor()
{
    return _armorType;
}

void Armor::setArmor(std::string armorType)
{
    _armorType = armorType;
}

LightArmor::LightArmor()
{
    this->setArmor("Light Armor");
}

MediumArmor::MediumArmor()
{
    this->setArmor("Medium Armor");
}

HeavyArmor::HeavyArmor()
{
    this->setArmor("Heavy Armor");
}

