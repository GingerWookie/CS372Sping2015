//Dylan Tucker CS372Sping2015 Final

#include <iostream>
#include <memory>
#include "Player.h"
#include "Armor.h"
#include "PremadeArmor.h"

int main()
{
std::shared_ptr<Armor> lightArmor = std::make_shared<LightArmor>();
std::shared_ptr<Armor> mediumArmor = std::make_shared<MediumArmor>();
std::shared_ptr<Armor> heavyArmor = std::make_shared<HeavyArmor>();
std::shared_ptr<Armor> customArmor = std::make_shared<Armor>(50, "Death Stalker Armor");

std::shared_ptr<Weapon> dagger = std::make_shared<Dagger>();
std::shared_ptr<Weapon> shortSword = std::make_shared<ShortSword>();
std::shared_ptr<Weapon> longSword = std::make_shared<LongSword>();
std::shared_ptr<Weapon> customWeapon = std::make_shared<Weapon>(100, "Death's Scythe");


Player player1;
player1.listOwnedItems();
player1.listCurrentStats();

player1.addItem(lightArmor);
player1.addItem(mediumArmor);
player1.addItem(heavyArmor);
player1.addItem(customArmor);
player1.addItem(dagger);
player1.addItem(shortSword);
player1.addItem(longSword);
player1.addItem(customWeapon);
player1.listOwnedItems();

player1.equipArmor(3);
player1.equipWeapon(2);
player1.listCurrentStats();

player1.equipArmor(4);
player1.equipWeapon(4);
player1.listCurrentStats();




return 0;
}
