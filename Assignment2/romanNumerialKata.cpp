#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>




std::string toRoman(int arabic)
{
    std::string roman = "";
    while(arabic >= 10)
    {
        roman += "X";
        arabic -= 10;
    }
    while(arabic-- > 0)
        roman += "I";

    return roman;
}




TEST_CASE("Arabic To Roman Conversion", "[toRoman]")
{
    REQUIRE( toRoman(1) == "I");
    REQUIRE( toRoman(2) == "II");
    REQUIRE( toRoman(3) == "III");
    REQUIRE( toRoman(10) == "X");
    REQUIRE( toRoman(33) == "XXXIII");
}


