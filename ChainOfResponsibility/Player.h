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
        const ArmorHandler getArmorHandler();
        void equipArmor(int);
        void listOwnedItems();
        void listCurrentStats();
        void addItem(std::shared_ptr<Armor>);

    protected:
    private:
        ArmorHandler _armor;

};

#endif // PLAYER_H
