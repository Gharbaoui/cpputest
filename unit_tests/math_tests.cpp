#include <CppUTest/TestHarness.h>
#include "../src/glob_headers.hpp"
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

TEST_GROUP(SecondTestGroup)
{

};


TEST(SecondTestGroup, CatTest)
{
	CHECK_TEXT(is_it_cat("CAt"), "this is not cat");
	CHECK_TEXT(is_it_cat("dog"), "this is not cat");
}

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
