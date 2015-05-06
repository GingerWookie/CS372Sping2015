#ifndef PREAMADEWEAPON_H
#define PREAMADEWEAPON_H

#include "Weapon.h"

class Dagger : public Weapon
{
public:
    Dagger();
private:
};

class ShortSword : public Weapon
{
public:
    ShortSword();
private:
};

class LongSword : public Weapon
{
public:
    LongSword();
private:
};

class NoWeapon : public Weapon
{
public:
    NoWeapon();
private:
};

#endif // PREAMADEWEAPON_H
