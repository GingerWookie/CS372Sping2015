#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <memory>
#include "Armor.h"



class Player
{
    public:
        Player();
        virtual ~Player();
    protected:
    private:
        std::shared_ptr<Armor> _armor;
};

#endif // PLAYER_H
