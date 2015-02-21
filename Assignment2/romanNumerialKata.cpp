#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>




std::string toRoman(int arabic)
{
    if(arabic == 2)
    return "II";
    return "I";
}




TEST_CASE("Arabic To Roman Conversion", "[toRoman]")
{
    REQUIRE( toRoman(1) == "I");
    REQUIRE( toRoman(2) == "II");
    REQUIRE( toRoman(3) == "III");
}


