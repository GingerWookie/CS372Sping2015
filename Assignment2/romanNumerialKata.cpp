#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
#include <vector>

#include <iostream>



std::string toRoman(int arabic)
{
    int arabicNum[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string romanNum[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    std::string roman = "";
    for(int i = 0; i < 13; i++)
        while(arabic >= arabicNum[i])
        {
            roman += romanNum[i];
            arabic -= arabicNum[i];
        }

    return roman;
}




TEST_CASE("Arabic To Roman Conversion", "[toRoman]")
{
    REQUIRE( toRoman(1) == "I");
    REQUIRE( toRoman(2) == "II");
    REQUIRE( toRoman(3) == "III");
    REQUIRE( toRoman(10) == "X");
    REQUIRE( toRoman(33) == "XXXIII");
    REQUIRE( toRoman(4) == "IV");
    REQUIRE( toRoman(1000) == "M");
    REQUIRE( toRoman(1550) == "MDL");
}


