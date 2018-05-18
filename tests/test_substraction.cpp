/*	
 	Testing the functionality of Substraction function
 	using Unit Tests via Google Testing framework.
*/

#include <gtest/gtest.h>
#include <stdio.h>
#include "../src/calculator_utilities.cpp"

TEST(SubstractionTests, SimpleSubstraction) {
	int firstNumber = 100;
	int secondNumber = 50;

	int result = substraction(firstNumber, secondNumber);

	EXPECT_EQ(result, 50);
}

TEST(SubstractionTests, NegativeSubstraction) {
	int firstNumber = -10;
	int secondNumber = -5;

	int result = substraction(firstNumber, secondNumber);

	EXPECT_EQ(result, -5);
}

TEST(SubstractionTests, OutOfBoundSubstraction) {
	long int firstNumber = 10000000500;
	long int secondNumber = 500;

	long int result = substraction(firstNumber, secondNumber);

	EXPECT_NE(result, 10000000000);
}

int main(int argc, char ** argv) {

	freopen("test_substraction_output.txt", "w", stdout);

	testing::InitGoogleTest(&argc, argv);
	int test_result = RUN_ALL_TESTS();

	fclose(stdout);
	return test_result;
}