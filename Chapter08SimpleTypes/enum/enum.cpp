
/*
If you try to output the value of an enumerator directly, the 
computer will output the value assigned to the enumerator. For example, 
suppose that registered = ALGEBRA;.The following statement will output the value 0 because the (default) value assigned to
ALGEBRA is 0:
*/


#include <iostream>
using namespace std;

int main() {

	enum courses {
		ALGEBRA, BASIC, PASCAL, CPP, PHILOSOPHY, ANALYSIS,
		CHEMISTRY, HISTORY //ordered set of values; ALGEBRA=0,BASIC=1, etc. 
	};//names should be valid identifiers
	courses registered;
	cout << "Enter first two letters of ur course: ";
	char ch1, ch2;
	cin >> ch1 >> ch2; //Read two characters
	switch (ch1)
	{
		case 'a':
		case 'A':
			if (ch2 == 'l' || ch2 == 'L')
				registered = ALGEBRA;
			else
				registered = ANALYSIS;
			break;
		case 'b':
		case 'B':
			registered = BASIC;
			break;
		case 'c':
		case 'C':
			if (ch2 == 'h' || ch2 == 'H')
				registered = CHEMISTRY;
			else
				registered = CPP;
			break;
		case 'h':
		case 'H':
			registered = HISTORY;
			break;
		case 'p':
		case 'P':
			if (ch2 == 'a' || ch2 == 'A')
				registered = PASCAL;
			else
				registered = PHILOSOPHY;
			break;
		default:
			cout << "Illegal input." << endl;
	}
	switch (registered)
	{
		case ALGEBRA:
			cout << "Algebra\n";
			break;
		case ANALYSIS:
			cout << "Analysis\n";
			break;
		case BASIC:
			cout << "Basic\n";
			break;
		case CHEMISTRY:
			cout << "Chemistry\n";
			break;
		case CPP:
			cout << "CPP\n";
			break;
		case HISTORY:
			cout << "History\n";
			break;
		case PASCAL:
			cout << "Pascal\n";
			break;
		case PHILOSOPHY:
			cout << "Philosophy\n";
	}

	courses nextCourse = static_cast<courses>(registered + 1);//can perform +, -, *
	enum sports {
		BASKETBALL=10, FOOTBALL, HOCKEY, BASEBALL, SOCCER,
		VOLLEYBALL //start from 10
	};
	for (sports mySport = BASKETBALL; mySport <= SOCCER;
		mySport = static_cast<sports>(mySport + 1))
		cout << mySport << endl;
	//enum grades {A, B, C, D, F} courseGrade; //Declaring Variables When Defining the Enumeration Type

	//enum {BASKETBALL, FOOTBALL, BASEBALL, HOCKEY} mySport;//Anonymous Data Types
	return 0;
}