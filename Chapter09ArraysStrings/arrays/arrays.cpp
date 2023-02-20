//print the numbers in reverse order.


#include <iostream>
using namespace std;


void arrayIndexOutofBound();
void baseAddress();

int main()
{   //rewrite using const int SIZE=5;
	int item[5]; //Declare an array item of five components
	int sum;
	int counter;
	cout << "Enter five numbers: ";
	sum = 0;
	for (counter = 0; counter < 5; counter++)
	{
		cin >> item[counter];
		sum = sum + item[counter];
	}
	cout << endl;
	cout << "The sum of the numbers is: " << sum << endl;
	cout << "The numbers in reverse order are: ";
	//Print the numbers in reverse order.
	for (counter = 4; counter >= 0; counter--)
		cout << item[counter] << " ";
	cout << endl;

	//arrayIndexOutofBound();
	//baseAddress();
	return 0;
}



void arrayIndexOutofBound()
{
	int list[2];

	list[0] = 5;
	list[1] = 10;
	list[2] = 15; //Array index is out of bounds

	for (int counter = 0; counter < 2; counter++)
		cout << list[counter] << " ";

	cout << endl;

	return ;
}

void baseAddress()
{
	int myList[5] = { 0, 2, 4, 6, 8 };                
	int yourList[5];                               

	cout << "Base address of myList: "
		<< myList << endl;                         
	cout << "Base address of yourList: "
		<< yourList << endl;                       

	if (myList == yourList)                         
		cout << "The base addresses of "
		<< "myList and yourList \n"
		<< "        are the same."
		<< endl;                               
	else if (myList < yourList)                     
		cout << "The base address of "
		<< "myList is less than the \n"
		<< "         base address of "
		<< "yourList." << endl;                
	else                                            
		cout << "The base address of "
		<< "myList is greater than the \n"
		<< "         base address of "
		<< " yourList." << endl;               

	return ;
}

/*
const int SIZE = 50; //Line 1
typedef double list[SIZE]; //Line 2
//Both are arrays of 50 components of type double
list yourList; //Line 3
list myList; //Line 4

*/