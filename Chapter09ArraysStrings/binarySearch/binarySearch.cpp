
#include <iostream> 
using namespace std;
const int ARRAY_SIZE = 10;
int binarySearch(const int list[], int listLength, int searchItem);

int main()
{
	int intList[ARRAY_SIZE];

	int number;
	cout << "Enter " << ARRAY_SIZE
		<< " integers in ascending order." << endl;
	for (int index = 0; index < ARRAY_SIZE; index++)
		cin >> intList[index];
	cout << endl;
	cout << "Enter the number to be "
		<< "searched: ";
	cin >> number;
	cout << endl;
	int pos = binarySearch(intList, ARRAY_SIZE, number);
	if (pos != -1)
		cout << number
		<< " is found at position " << pos
		<< endl;
	else
		cout << number
		<< " is not in the list." << endl;
	return 0;
}


int binarySearch(const int list[], int listLength, int searchItem)
{
	int first = 0;
	int last = listLength - 1;
	int mid;
	bool found = false;
	while (first <= last && !found)
	{
		mid = (first + last) / 2;
		if (list[mid] == searchItem)
			found = true;
		else if (list[mid] > searchItem)
			last = mid - 1;
		else
			first = mid + 1;
	}
	if (found)
		return mid;
	else
		return -1;
}//end binarySearch