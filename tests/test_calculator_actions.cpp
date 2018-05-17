/*	testing the functionality of calculatorActions function
	using Google Testing Framework(gtest) and Google Mocking
	Framework(gmock) for simulating the behaviour of dependent
	functions such as addition, substraction, multiplication
	and division.
*/

#include <gtest/gtest.h>
#include "../src/calculator_utilities.cpp"
#include "../src/calculator_operations.cpp"

TEST(CalculatorActionTests, AdditionCase) {
	int firstNumber = 10;
	int secondNumber = 12;
	char operatorToEvaluate = '+';

	int result = calculatorActions(firstNumber, secondNumber, operatorToEvaluate);

	EXPECT_EQ(result, 22);
}

TEST(CalculatorActionTests, SubstractionCase) {
	int firstNumber = 10;
	int secondNumber = 12;
	char operatorToEvaluate = '-';

	int result = calculatorActions(firstNumber, secondNumber, operatorToEvaluate);

	EXPECT_EQ(result, -2);
}

TEST(CalculatorActionTests, MultiplicationCase) {
	int firstNumber = 10;
	int secondNumber = 12;
	char operatorToEvaluate = '*';

	int result = calculatorActions(firstNumber, secondNumber, operatorToEvaluate);

	EXPECT_EQ(result, 120);
}

TEST(CalculatorActionTests, DivisionCase) {
	int firstNumber = 24;
	int secondNumber = 12;
	char operatorToEvaluate = '/';

	int result = calculatorActions(firstNumber, secondNumber, operatorToEvaluate);

	EXPECT_EQ(result, 2);
}

TEST(CalculatorActionTests, DefaultCase) {
	int firstNumber = 10;
	int secondNumber = 12;
	char operatorToEvaluate = '(';

	int result = calculatorActions(firstNumber, secondNumber, operatorToEvaluate);

	EXPECT_EQ(result, -1);
}

int main(int argc, char ** argv) {

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}