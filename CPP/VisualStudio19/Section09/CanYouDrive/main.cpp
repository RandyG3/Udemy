#include <iostream>
using namespace std;

int main()
{
	int age{ 1 };
	const int driving_age{ 16 };

	if (age >= driving_age)
		cout << "Yes - you can drive!" << endl;
	else 
		cout << "Sorry, come back in " << driving_age - age << " years." << endl;

	return 0;
}