#include <iostream>
using namespace std;

int main()
{
	int totalAmount{ 100 };
	int totalNumber{ 8 };
	double average{ 0.0 };

	average = totalAmount / totalNumber;
	cout << average << endl;  // Displays 12

	average = static_cast<double>(totalAmount) / totalNumber;  // compiler converts totalNumber to dbl
	cout << average << endl;  // Displays 12.5

	return 0;
}