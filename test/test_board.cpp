#define CATCH_CONFIG_MAIN
#include "catch/catch.hpp"
#include "../src/board.h"

#include <iostream>

TEST_CASE( "Board::is_location_on_board returns correct assessments", "[board]" )
{
    Board test_board(8, 8);

    SECTION("Valid locations return true")
    {
        REQUIRE(test_board.is_location_on_board("a1") == true);
        REQUIRE(test_board.is_location_on_board("h8") == true);
    }

    SECTION("Invalid locations return false")
    {
        REQUIRE(test_board.is_location_on_board("aa11") == false);
        REQUIRE(test_board.is_location_on_board("a") == false);
    }
}
