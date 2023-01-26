// rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
perimeter = 2 * (length + width)
area = length * width

*/

#include <iostream>
using namespace std;

int main()
{
    int perim, area;
    int len = 12, width = 13;
    perim = 2 * (len + width);
    area = len * width;
    cout << "Perimeter = " << perim << ", area = " << area << endl;
    
    
    return 0;

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
