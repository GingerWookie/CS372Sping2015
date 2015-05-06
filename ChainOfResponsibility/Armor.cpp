#include "Armor.h"

Armor::Armor(int ac, std::string armorType):_ac(ac), _armorType(armorType)
{}

std::string Armor::getArmorType()
{
    return _armorType;
}

int Armor::getAC()
{
    return _ac;
}

void Armor::setArmorType(std::string armorType)
{
    _armorType = armorType;
}

NoArmor::NoArmor(): Armor(0, "No Armor")
{}



MediumArmor::MediumArmor(): Armor(5, "Medium Armor")
{}

HeavyArmor::HeavyArmor(): Armor(10, "Heavy Armor")
{}

