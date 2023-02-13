//Example: setw 

#include <iostream>
#include <iomanip>

using namespace std;

void width()
{
    int x = 19;                                     
    int a = 345;                                    
    double y = 76.38;                              

    cout << "*********************** Default Printing ****************************\n";
    cout  << "Text: " << x << endl;
    cout << "Text text: "  << a  << endl;
    cout << "Text text text: " << y << endl;
    cout << "Text text text text: " << x << endl;
    cout << "*********************** use setw, default justification is right  ****************************\n";
    cout << setw(25) << "Text: " << setw(5) << x << endl;
    cout << setw(25) << "Text text: " << setw(5) << a << endl;
    cout << setw(25) << "Text text text: " << setw(5) << y << endl;
    cout << setw(25) << "Text text text text: " << setw(5) << x << endl;
    cout << "*********************** use setw, change justification to left  ****************************\n";
    cout << setw(25) <<left << "Text: " << setw(5) << x << endl;
    cout << setw(25) << left << "Text text: " << setw(5) << a << endl;
    cout << setw(25) << left << "Text text text: " << setw(5) << y << endl;
    cout << setw(25) << left << "Text text text text: " << setw(5) << x << endl;
    cout << "*********************** use setw, change justification to left,fill char  ****************************\n";
    cout <<setfill('-') << setw(25) << left << "Text: " << setw(5) << x << endl;
    cout << setw(25) << left << "Text text: " << setw(5) << a << endl;
    cout << setw(25) << left << "Text text text: " << setw(5) << y << endl;
    cout << setfill(' ') << setw(25)  << "Text text text text: " << setw(5) << x << endl;
    cout << "*********************** use setw, change justification to default,fill char  ****************************\n";
    cout.unsetf(ios::left);//unset left flag
    cout << setfill('-') << setw(25) << left << "Text: " << setw(5) << x << endl;
    cout << setw(25) << left << "Text text: " << setw(5) << a << endl;
    cout << setw(25) << left << "Text text text: " << setw(5) << y << endl;
    cout << setw(25) << "Text text text text: " << setw(5) << x << endl;

    
}

//check out octal using oct
void hextinput() {
    
        unsigned int address;
        int val;
        
        cout << "Enter address in hex: ";
        cin >> hex >> address; //val can optionally be preceded with 0x

        cout << "Enter val: ";
        cin >>dec>> val; //dec is required otherwise it will treat val in hex
        cout <<hex << "Address: " << address<<dec << ", val: " << val << endl;


}

void printFloat() {
    double d = 2.00;
    cout << "d=2: " << d << endl;
    
    cout<< setprecision(8) <<noshowpoint<< "with showpoint d=2: " << d << endl;

}

int main() {

    //width();
    //hextinput();
    printFloat();

    return 0;
}