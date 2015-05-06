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

void Armor::setAC(int ac)
{
    _ac = ac;
}

int Armor::getAC()
{
    return _ac;
}


