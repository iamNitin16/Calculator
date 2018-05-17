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