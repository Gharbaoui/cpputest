#include <CppUTest/TestHarness.h>
#include "../src/math.hpp"
#include <iostream>


TEST_GROUP(FirstTestGroup)
{
	void	setup()
	{
		// setup is called prior before each test
		std::cout << "Setup\n";
	}

	void	teardown()
	{
		// teardown is called after test body
		std::cout << "Tear down\n";
	}
};


TEST(FirstTestGroup, First)
{
	CHECK_EQUAL(add(2, 3), 5);
	CHECK_EQUAL(add(2, -2), 1);
}

TEST(FirstTestGroup, Second)
{
	CHECK_EQUAL(mult(2, 3), 6);
	CHECK_EQUAL(mult(2, 4), 8);
}
