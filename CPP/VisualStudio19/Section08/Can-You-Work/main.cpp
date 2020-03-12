#include <iostream>
using namespace std;

int main()
{
	int age{ 0 };
	bool parental_consent{ 1 };
	int ssn{ 1 };
	char accidents{ 0 };
	int work{ 0 };

	age = 14;

	if ((age >= 18 || (age > 15 && ssn == 1 && parental_consent == 1)) &&
		ssn == 1 && accidents == 0) work = 1;
	cout << work << endl;
}