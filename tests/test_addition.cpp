/*	
 	Testing the functionality of Addition function
 	using Unit Tests via Google Testing framework.
*/

#include <gtest/gtest.h>
#include <stdio.h>
#include "../src/calculator_utilities.cpp"

TEST(AdditionTests, SimpleAddition) {
	int firstNumber = 100;
	int secondNumber = 50;

	int result = addition(firstNumber, secondNumber);

	EXPECT_EQ(result, 150);
}

TEST(AdditionTests, NegativeAddition) {
	int firstNumber = -10;
	int secondNumber = -5;

	int result = addition(firstNumber, secondNumber);

	EXPECT_EQ(result, -15);
}

TEST(AdditionTests, OutOfBoundAddition) {
	long int firstNumber = 10000000000;
	long int secondNumber = 500;

	long int result = addition(firstNumber, secondNumber);

	EXPECT_NE(result, 10000000500);
}

int main(int argc, char ** argv) {

	freopen("test_addition_output.txt", "w", stdout);

	testing::InitGoogleTest(&argc, argv);
	int test_result = RUN_ALL_TESTS();

	fclose(stdout);
	return test_result;
}