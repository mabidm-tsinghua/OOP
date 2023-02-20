
#include <iostream>
using namespace std;

int pow(int num, int exp);
int powRecursive(int num, int exp);

int main() {
	int num, exp;
	cout << "Enter number and exponent: ";
	cin >> num >> exp;
	cout << num << "^" << exp << " = " << pow(num,exp)<<endl;
	cout << num << "^" << exp << " = " << powRecursive(num, exp) << endl;


	return 0;
}

//here exp >= 0
int pow(int num, int exp) {
	
	if (exp == 0) return 1;
	int res = 1;
	for (int i = 1; i <= exp; i++)
		res = res * num;

	return res;
}
//
//here exp >= 0
int powRecursive(int num, int exp) {

	 if (exp == 0)  //base case
		return 1;
	else			//recursive
		return num * powRecursive(num,exp-1); 
}