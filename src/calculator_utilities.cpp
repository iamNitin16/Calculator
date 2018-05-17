#include <iostream>
#include <vector>

using namespace std;

namespace Calculator {

/*	Variable: Stack
	Stack to save integer data to memory.
*/

std::vector<int> stack = {};

/*	Variable: secondNumber
	Integer variable to save second operand of calculator.

	Variable: result
	Integer variable to save the result of any operation.
*/
int secondNumber, result;

/*	Variable: operatorToEvaluate
	Character variable to save operator(which type of operation to perform on Calculator).
*/
char operatorToEvaluate;

};

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

int substraction (int firstOperand, int secondOperand) {
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

/*	Function: addData

	A Simple function to add data to stack.

	Parameters:

		data: The integer which we want to add to stack.

	Returns:
*/

void addData (int data) {
	Calculator::stack.push_back(data);
}

/*	Function: displayStoredData

	A Simple function to display and clear all data stored in Stack.

	Parameters:

	Returns:
*/

void displayStoredData () {
	vector<int>::reverse_iterator reverseIterator;

	cout << "Your Memory containes:";
	if(Calculator::stack.size() == 0) {
		cout << " Nothing" << endl;
	}
	else{
		for(reverseIterator = Calculator::stack.rbegin(); reverseIterator != Calculator::stack.rend(); ++reverseIterator) {
			cout << ' ' << *reverseIterator;
		}
		cout << endl;
		Calculator::stack.clear();
	}
}

/*	Function: initialInstruction

	A simple function to display Instructions to user.

	Parameters:
	Returns:
*/

void initialInstruction() {
	cout << "Instructions:\n\nPress + to add" << endl;
	cout << "Press - to subtract" << endl;
	cout << "Press * to multiply" << endl;
	cout << "Press / to divide" << endl;
	cout << "Press c to clear" << endl;
	cout << "Press m to save" << endl;
}

/*	Function: calculatorActions
	
	A simple function for computing addition, subtraction, multiplication and division.

	Parameters:

		firstOperand: The first Operand for an Action
		secondOperand: The Second Operand for an Action.
		operatorToEvaluate: Tha Charater Operator for an specific action.

	Returns:

		The result of the specified action.

	See Also:

		<addition>
		<substraction>
		<multiplication>
		<division>
*/

int calculatorActions(int firstOperand, int secondOperand, char operatorToEvaluate) {
	switch ( operatorToEvaluate ) {
		case '+': return addition(firstOperand, secondOperand);
				break;
		case '-': return substraction(firstOperand, secondOperand);
				break;
		case '*': return multiplication(firstOperand, secondOperand);
				break;
		case '/': return division(firstOperand, secondOperand);
				break;
		default: return -1;
	}
}

/*	Function: processing

	A function for complete processing of Calculator.
	It will take input from user and perform desired operation based on input character.

	Parameters:
	Returns:
	See Also:

		<calculatorActions>
		<addData>
*/

void processing () {
	cin >> Calculator::result;

	do{
		cin >> Calculator::operatorToEvaluate;

		if( Calculator::operatorToEvaluate == 'm') {
			addData(Calculator::result);
		}
		
		else if( Calculator::operatorToEvaluate == 'c' ) {
			displayStoredData();
			cout << "Bye!!" << endl;
			exit (0);
		}
		
		else if (Calculator::operatorToEvaluate == '+' || Calculator::operatorToEvaluate == '-' || Calculator::operatorToEvaluate == '*' || Calculator::operatorToEvaluate == '/') {
			cin  >> Calculator::secondNumber;
			int result = calculatorActions(Calculator::result, Calculator::secondNumber, Calculator::operatorToEvaluate);
			Calculator::result = result;
		}
		else {
			cout << "Please Enter a valid Character" << endl;
		}
		cout << Calculator::result;
	}while(true);
}