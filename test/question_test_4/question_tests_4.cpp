#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Fib Sequence Test") 
{
	REQUIRE(get_fib_sequence(5) == "0 1 1 2 3 5 ");
	REQUIRE(get_fib_sequence(7) == "0 1 1 2 3 5 8 13 ");
	REQUIRE(get_fib_sequence(10) == "0 1 1 2 3 5 8 13 21 34 55 ");
	REQUIRE(get_fib_sequence(12) == "0 1 1 2 3 5 8 13 21 34 55 89 144 ");
} 
// get_fib_sequence(7) is incorrect in the provided test case from midterm, (7) has to be 13. 