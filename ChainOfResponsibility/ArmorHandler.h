#ifndef ARMORHANDLER_H
#define ARMORHANDLER_H

#include <vector>
#include <memory>
#include <iostream>
#include <string>
#include "Armor.h"




class ArmorHandler
{
public:
    ArmorHandler();
    ~ArmorHandler() = default;
    void addArmor(std::shared_ptr<Armor>);
    void listOwnedArmors();
    void equipArmor(int);
    void listCurrentStats();
    std::string getCurrentArmorType();
    int getCurrentAC();
    std::shared_ptr<Armor> getCurrentArmor();
protected:
private:
    std::vector<std::shared_ptr<Armor>> _ownedArmors;
    std::shared_ptr<Armor> _currentArmor;
};

#endif // ARMORHANDLER_H
