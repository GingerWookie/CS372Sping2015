#ifndef ARMOR_H
#define ARMOR_H

#include <string>

class Armor
{
public:
    Armor(int, std::string);
    virtual ~Armor() = default;
    void setArmorType(std::string);
    std::string getArmorType();
    void setAC();
    int getAC();

protected:
private:
    int _ac;
    std::string _armorType;
};






#endif // ARMOR_H
