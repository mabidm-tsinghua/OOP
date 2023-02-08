#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double d = 0.1;
    double a = 0.2;
    cout << a << " + " << d << " = " << a + d << endl;
    if (d + a == 0.3) 
        cout<< "true" << std::endl;
    else
        cout << "false" << std::endl;

	return 0;
}