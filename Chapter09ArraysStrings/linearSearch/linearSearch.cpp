
#include <iostream> 
using namespace std; 
const int ARRAY_SIZE = 10; 
int seqSearch(const int list[], int listLength,	int searchItem); 

int main() 
{ 
	int intList[ARRAY_SIZE]; 

	int number; 
	cout << "Enter " << ARRAY_SIZE
		<< " integers." << endl; 
	for (int index = 0; index < ARRAY_SIZE; index++) 
		cin >> intList[index]; 
	cout << endl; 
	cout << "Enter the number to be "
		<< "searched: "; 
	cin >> number; 
	cout << endl; 
	int pos = seqSearch(intList, ARRAY_SIZE, number); 
	if (pos != -1) 
		cout << number
		<< " is found at position " << pos
		<< endl; 
	else 
		cout << number
		<< " is not in the list." << endl; 
	return 0; 
}


int seqSearch(const int list[], int listLength, int searchItem)
{
	int loc;
	bool found = false;
	loc = 0;
	while (loc < listLength && !found)
		if (list[loc] == searchItem)
			found = true;
		else
			loc++;
	if (found)
		return loc;
	else
		return -1;
}