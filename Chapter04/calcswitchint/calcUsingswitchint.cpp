
#include <iostream>
using namespace std;

int main() {

	int num1;
	int num2;
	int op;

	cout << "Enter first integer: ";
	cin >> num1;
	cout << "Enter second integer: ";
	cin >> num2;
	cout << "Enter operation (1(+),2(-),3(*),4(/),5(%)): ";
	cin >> op;

	switch (op) {
	case 1:
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case 2:
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case 3:
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case 4:
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	case 5:
		cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
		break;
	default:
		cout << "Invalid operation enetered: " << op << endl;
		break;
	}

	return 0;


}