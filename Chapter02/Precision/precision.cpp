
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "Print with Default precision which is 6 digits" << endl;
    cout << "float precision is 6 or 7 digits while double is 15 digits\n";
    double d = 1.000123456789000;
    cout << "double: " << d << endl;
    float f = 1.000123456789000f;
    cout << "float: " << f << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    d = 0.000123456789000;
    cout << "double: " << d << endl << endl;
    f = 0.000123456789000f;
    cout << "float: " << f << endl << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    d = 1.0 / 3;
    cout <<"double: " << d << endl;
    f = 1.0f / 3;
    cout <<"float: " << f << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    cout << "---------Now change precision to 15 digits" << endl;
    d = 1.000123456789000;
    cout << setprecision(15) << "double: " << d << endl;
    f = 1.000123456789000f;
    cout << "float: " << f << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    d = 0.000123456789000;
    cout << "double: " << d << endl << endl;
    f = 0.000123456789000f;
    cout << "float: " << f << endl << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    d = 1.0 / 3;
    cout <<"double" << d << endl;
    f = 1.0f / 3;
    cout <<"float: " << f << endl;




   

	return 0;
}