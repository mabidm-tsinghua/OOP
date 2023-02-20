//Input Failure program

#include <iostream>

using namespace std;

//Either call input1 or input2 fun in main()
bool input1() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;
    
    if (!cin) {
        cout << "Wrong input: Prog is terminating\n";
        return false;
    }
    int sum = a + b + c + d;
    cout << "Sum = " << sum << endl;

    return true;
}
//
bool input2() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;
   
    if (!cin) {
        cout << "Wrong input!\n";
        cin.clear();//restore the input stream to a working state.
        cin.ignore(50, '\n');//stillneed to clear the rest of the garbage from the input stream.
        cout << "Enter four integers again: ";
        cin >> a >> b >> c >> d;
        if (!cin) {
            cout << "Again wrong input: Prog is terminating\n";
            return false;
        }
    }
    int sum = a + b + c + d;
    cout << "Sum = " << sum << endl;

    return true;
}

//Redirection:
//input from a file : inputFailure.exe < input.txt
//output to a file : inputFailure.exe > output.txt
//input and output: inputFailure.exe < input.txt > output.txt
//output of one prog is input of another: inputFailure.exe | inputFailure.exe 

int main()
{
    //input1();
    input2();

    return 0;
}
