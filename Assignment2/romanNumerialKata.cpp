#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
#include <vector>

#include <iostream>



std::string toRoman(int arabic)
{
    int arabicNum[] = {10, 1};
    std::string romanNum[] = {"X","I"};
    std::string roman = "";
    for(int i = 0; i < 2; i++)
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
}


