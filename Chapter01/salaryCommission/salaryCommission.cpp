// salaryCommission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int baseSalary;
    int noOfServiceYears;
    int bonus;
    int additionalBonus;
    int totalSale;
    int payCheck;

    cout << "Plz enter base salary and no of service years: ";
    cin >> baseSalary >> noOfServiceYears;
    cout << "Enter total Sales: ";
    cin >> totalSale;
    


    //
    if (noOfServiceYears <= 5) {
        bonus = 0.1 * baseSalary;
    }else {
        bonus = 0.2 * baseSalary;
    }
    if (totalSale < 5000) {
        additionalBonus = 0;
    }
    else if (totalSale >= 5000 && totalSale < 10000) {
        additionalBonus = 0.03 * totalSale;
    }
    else {
        additionalBonus = 0.06 * totalSale;
    }

    payCheck = baseSalary + bonus + additionalBonus;
    cout << "Total Salary: "<<payCheck
        <<",with bonus: "<<bonus
        <<",additional bonus: "<<additionalBonus<<endl;
        
    
  

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
