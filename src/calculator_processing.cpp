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