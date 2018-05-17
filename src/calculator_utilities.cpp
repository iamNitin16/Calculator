#include <iostream>

using namespace std;

/*	Function: addition

	Simple function to add two integers.

	Parameters:

		firstOperand: The first Operand for Addition.
		secondOperand: The Second Operand for Addition.

	Returns:

		The result of Addition of two integers.
*/

int addition (int firstOperand, int secondOperand) {
	return firstOperand + secondOperand;
}

/*	Function: subtraction

	Simple function to subtract two integers.

	Parameters:

		firstOperand: The First Operand for Subtraction.
		secondOperand: The Second Operand for Subtraction.

	Returns:

		The result of Subtraction of two integers.
*/

int subtraction (int firstOperand, int secondOperand) {
	return firstOperand - secondOperand;
}

/*	Function: multiplication
	
	A Simple function to multiply two integers.

	Parameters:

		firstOperand: The First Operand for multiplicaton.
		secondOperand: The Second Operand for multiplication.

	Returns:

		The result of Multiplication of two integers.

	See Also:

		<addition>
*/

int multiplication (int firstOperand, int secondOperand) {
	return firstOperand * secondOperand;
}

/*	Function: division
	
	A simple function to divide two integers.

	Parameters:

		firstOperand: The First Operand for Division.
		secondOperand: The Second Operand for Division.

	Returns:

		The result of Division of two integers.
*/

int division (int firstOperand, int secondOperand) {
	if ( secondOperand == 0 ) {
		throw "Division by Zero error";
	}

	return firstOperand / secondOperand;
}