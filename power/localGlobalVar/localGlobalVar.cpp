
#include <iostream>
using namespace std;

int a = 12;
int g;
int gl = 12;

int main() {
	int b = 13;
	int gl = 12222;
	cout <<"Local: " << b << " Global: " << a<<" Default val of Global: " << g <<endl;
	cout << "Local: " << gl << " Global: " << ::gl << endl;
	return 0;
}

