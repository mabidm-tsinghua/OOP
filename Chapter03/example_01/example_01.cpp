/*comments*/
#include <iostream>
using namespace std;

int main() {
	int a, b;
	double z;
	char ch;
	
	//if an error occurs during input the prog continues executing 
	/* Once an input stream enters the fail state, all further I/O 
	statements using that stream are ignored. Unfortunately,
	the program quietly continues to execute with whatever values are stored in
	variables and produces incorrect results.
	*/

	cin >> ch; cout << ch <<endl;//A ch = 'A'
	cin >> ch; cout << ch << endl;//AB ch = 'A', 'B' is held for later input
	cin >> a; cout << a << endl; //48 a = 48
	cin >> a; //46.35 a = 46, .35 is held for later input
	cin >> z; //74.35 z = 74.35
	cin >> z; //39 z = 39.0
	cin >> z >> a; //65.78 38 z = 65.78, a = 38
	
	return 0;
}