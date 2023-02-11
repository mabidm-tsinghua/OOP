
#include <iostream>
using namespace std;

int main() {

	int num;
	int digit;
	cout << "Enter an integer: ";
	cin >> num;
	cout << num << ": ";

	while (num > 0) {
		digit = num % 10;
		num = num / 10;
		cout << digit << " ";
	
	}
	cout << endl;

	return 0;
}