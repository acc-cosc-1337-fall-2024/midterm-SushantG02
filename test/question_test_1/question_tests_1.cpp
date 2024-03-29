#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Decimal to hex")
{
	REQUIRE(decimal_to_hex(10) == "A");
	REQUIRE(decimal_to_hex(170) == "AA");
	REQUIRE(decimal_to_hex(255) == "FF");
}
