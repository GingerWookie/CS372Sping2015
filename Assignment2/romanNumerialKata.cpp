#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>




std::string toRoman(int arabic)
{
    return "I";
}




TEST_CASE("Arabic To Roman Conversion", "[toRoman]")
{
    REQUIRE( toRoman(1) == "I");
}


