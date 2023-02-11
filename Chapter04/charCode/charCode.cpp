

#include <iostream> 
using namespace std; 

int main() 
{ 
	int testScore; 
	cout << "Enter the test score: "; 
	cin >> testScore; 
	cout << endl; 
	switch ( (int)ceil(testScore / 10.0) )
	{ 
		case 0: 
		case 1: 
		case 2: 
		case 3: 
		case 4: 
		case 5: 
			cout << "The grade is F." << endl; break; //up to 50
		case 6: 
			cout << "The grade is D." << endl; break;// 51-60
		case 7: 
			cout << "The grade is C." << endl; break;//61-70
		case 8: 
			cout << "The grade is B." << endl; break;//71-80
		case 9: 
		case 10: 
			cout << "The grade is A." << endl; break;//81-100
		default: 
			cout << "Invalid test score." << endl; break;
	} 

	
	return 0; 
} 
