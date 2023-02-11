
#include <iostream>
using namespace std;

int main() {

	int num1;
	int num2;
	char op;

	cout << "Enter first integer: ";
	cin >> num1;
	cout << "Enter second integer: ";
	cin >> num2;
	cout << "Enter operation (+,-,*,/,%): ";
	cin >> op;

	if (op == '+') {
		cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;
	}else if (op == '-') {
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	}	else if (op == '*') {
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	}	else if (op == '/') {
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	}	else if (op == '%') {
		cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
	} else {
		cout << "Invalid operation enetered: " << op << endl;
	}

	return 0;


}