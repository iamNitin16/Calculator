/*	
 	Testing the functionality of Division function
 	using Unit Tests via Google Testing framework.
*/

#include <gtest/gtest.h>
#include "../src/calculator_utilities.cpp"

TEST(DivisionTests, SimpleDivision) {
	int firstNumber = 10;
	int secondNumber = 5;

	int result = division(firstNumber, secondNumber);

	EXPECT_EQ(result, 2);
}

TEST(DivisionTests, NegativeDivision) {
	int firstNumber = -10;
	int secondNumber = 5;

	int result = division(firstNumber, secondNumber);

	EXPECT_EQ(result, -2);
}

TEST(DivisionTests, OutOfBoundDivision) {
	long int firstNumber = 10000000000;
	int secondNumber = 100000;

	int result = division(firstNumber, secondNumber);

	EXPECT_NE(result, 100000);
}

TEST(DivisionTests, InCompleteDivisorDivision) {
	int firstNumber = 12;
	int secondNumber = 10;

	float result = division(firstNumber, secondNumber);

	EXPECT_NE(result, 1.2);
}

TEST(DivisionTests, DivideByZeroException) {
	int firstNumber = 10;
	int secondNumber = 0;

	EXPECT_ANY_THROW(division(firstNumber, secondNumber));
}

int main(int argc, char ** argv) {

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}