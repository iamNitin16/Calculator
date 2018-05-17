/*	
 	Testing the functionality of Multiplication function
 	using Unit Tests via Google Testing framework.
*/

#include <gtest/gtest.h>
#include "../src/calculator_utilities.cpp"

TEST(MultiplicationTests, SimpleMultiplication) {
	int firstNumber = 10;
	int secondNumber = 5;

	int result = multiplication(firstNumber, secondNumber);

	EXPECT_EQ(result, 50);
}

TEST(MultiplicationTests, NegativeMultiplication) {
	int firstNumber = -10;
	int secondNumber = 5;

	int result = multiplication(firstNumber, secondNumber);

	EXPECT_EQ(result, -50);
}

TEST(MultiplicationTests, OutOfBoundMultiplication) {
	int firstNumber = 10000000;
	int secondNumber = 50000;

	long int result = multiplication(firstNumber, secondNumber);

	EXPECT_EQ(result, 500000000000);
}

int main(int argc, char ** argv) {

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}