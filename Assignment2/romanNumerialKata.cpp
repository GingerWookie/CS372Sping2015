#define CATCH_CONFIG_MAIN
#include "catch.hpp"
TEST_CASE("Arabic To Roman Conversion", "[toRoman]")
{
    REQUIRE( toRoman(1) == "I");
}


