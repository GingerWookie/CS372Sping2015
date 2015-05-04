#ifndef ARMOR_H
#define ARMOR_H

#include <string>

class Armor
{
public:
    virtual ~Armor() = default;
    std::string getArmor();
    void setArmor(std::string);
protected:
private:
    std::string _armorType;
};

class LightArmor : public Armor
{
public:
    LightArmor();
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
