
#include <iostream>
using namespace std;

int main() {
	int a, b;
	double z;
	char ch;

	/* the >> operator skips any leading whitespace characters.
	*/
    
	//assume input: a b 48
	cin >> ch; cout << ch << endl;
	cin >> ch; cout << ch << endl;
	cin >> a; cout << a << endl;
	//assume input: a b 48
	cin.get( ch ); cout<<"cin.get( ch ): " << ch << endl;//read all chars including whitespace chars
	cin.get(ch); cout <<"cin.get( ch ): " << ch << endl;
	cin >> a; cout << a << endl;

	

	return 0;
}