#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <memory>
#include "Armor.h"
#include "ArmorHandler.h"



class Player
{
    public:
        Player();
        ~Player() = default;
        std::shared_ptr<Armor> getCurrentArmor();
        std::string getCurrentArmorType();
        int getCurrentAC();
        void equipArmor(int);
        void listOwnedArmors();
        void addArmor(std::shared_ptr<Armor>);

    protected:
    private:
        std::unique_ptr<ArmorHandler> _armor;

};

#endif // PLAYER_H
