#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
    public:
        Weapon(int, std::string);
        ~Weapon() = default;
        void setWeaponType(std::string);
        std::string getWeaponType();
        void setDamage(int);
        int getDamage();
    protected:
    private:
        int _damage;
        std::string _weaponType;
};

#endif // WEAPON_H
