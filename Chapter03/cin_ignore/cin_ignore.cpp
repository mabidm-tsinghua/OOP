
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

	//assume input: a b 48
	cin >> ch; cout << ch << endl;
	cin >> ch; cout << ch << endl;
	cin >> a; cout << a << endl;
	//assume input: a b 48
	cin.ignore(100,'\n');//Extracts characters from the input sequence and discards them, until either n characters have been extracted, or one compares equal to delim
	cin.get(ch); cout << "cin.get( ch ): " << ch << endl;//read all chars including whitespace chars
	cin.get(ch); cout << "cin.get( ch ): " << ch << endl;
	cin >> a; cout << a << endl;



	return 0;
}