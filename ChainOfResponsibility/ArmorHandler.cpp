#include "ArmorHandler.h"
ArmorHandler::ArmorHandler()
{}

void ArmorHandler::addArmor(std::shared_ptr<Armor> armor)
{
        _ownedArmors.push_back(armor);
}

void ArmorHandler::listOwnedArmors()
{
    int position = 0;

    for(auto armor : _ownedArmors)
    {
        std::cout << "Position: " << position << " ArmorType: " << armor->getArmorType() << " AC: " << armor->getAC() << std::endl;
        ++position;
    }
}

void ArmorHandler::equipArmor(int position)
{
    _currentArmor = _ownedArmors[position];
}


std::string ArmorHandler::getCurrentArmorType()
{
    return _currentArmor->getArmorType();
}

int ArmorHandler::getCurrentAC()
{
    return _currentArmor->getAC();
}

std::shared_ptr<Armor> ArmorHandler::getCurrentArmor()
{
    return _currentArmor;
}
