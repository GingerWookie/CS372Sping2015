#include "Armor.h"

Armor::Armor(int ac, std::string armorType):_ac(ac), _armorType(armorType)
{}

void Armor::setArmorType(std::string armorType)
{
    _armorType = armorType;
}


std::string Armor::getArmorType()
{
    return _armorType;
}

int Armor::getAC()
{
    return _ac;
}


