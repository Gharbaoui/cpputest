#include <CppUTest/TestHarness.h>
#include "../src/math.hpp"


TEST_GROUP(FirstTestGroup)
{

};


TEST(FirstTestGroup, First)
{
	CHECK_EQUAL(add(2, 3), 5);
	CHECK_EQUAL(add(2, -2), 0);
}

TEST(FirstTestGroup, Second)
{
	CHECK_EQUAL(mult(2, 3), 6);
	CHECK_EQUAL(mult(2, 4), 8);
}
