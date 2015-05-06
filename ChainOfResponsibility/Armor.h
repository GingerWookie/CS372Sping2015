#ifndef ARMOR_H
#define ARMOR_H

#include <string>

class Armor
{
public:
    Armor(int, std::string);
    virtual ~Armor() = default;
    std::string getArmorType();
    int getAC();
    void setArmorType(std::string);
protected:
private:
    int _ac;
    std::string _armorType;
};

class NoArmor : public Armor
{
public:
    NoArmor();
private:
};


class MediumArmor : public Armor
{
public:
    MediumArmor();
private:
};

class HeavyArmor : public Armor
{
public:
    HeavyArmor();
private:
};



#endif // ARMOR_H
