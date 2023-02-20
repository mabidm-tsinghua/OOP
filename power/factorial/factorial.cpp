
#include <iostream>
using namespace std;

int factorial(int num);
int factorialRecursive(int num);

int main() {
	int num;
	cout << "Enter number for factorial: ";
	cin >> num;
	cout << num << "!" << " = " << factorial(num) << endl;
	cout << num << "!" << " = " << factorialRecursive(num) << endl;


	return 0;
}

//
int factorial(int num) {

	if (num == 0) return 1;
	int res = 1;
	for (int i = num; i > 1; i--)
		res = res * i;

	return res;
}
//

int factorialRecursive(int num) {

	if (num == 0 || num == 1)  //base case
		return 1;
	else			//recursive
		return num * factorialRecursive(num - 1);
}