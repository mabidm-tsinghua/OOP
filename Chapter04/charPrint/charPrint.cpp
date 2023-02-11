
#include <iostream>
using namespace std;

int main() {

	
	unsigned char op;

	for (op = 0; op < (unsigned short)255; op++)
		cout <<hex<<"code: "<<(int)op <<" char: " << op <<endl;
	

	return 0;


}