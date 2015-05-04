//Dylan Tucker CS372Sping2015 Final

#include <iostream>
#include <memory>
#include "Player.h"
#include "Armor.h"
#include "ArmorHandler.h"


int main()
{
    Player player1;
    std::shared_ptr<Armor> lightArmor = std::make_shared<LightArmor>();
    std::shared_ptr<Armor> mediumArmor = std::make_shared<MediumArmor>();
    std::shared_ptr<Armor> heavyArmor = std::make_shared<HeavyArmor>();
    std::cout << lightArmor->getArmor() << std::endl;
    std::cout << mediumArmor->getArmor() << std::endl;
    std::cout << heavyArmor->getArmor() << std::endl;


    return 0;
}
