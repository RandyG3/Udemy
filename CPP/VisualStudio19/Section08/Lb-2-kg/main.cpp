#include <iostream>
using namespace std;

int main()
{
    const double lb_per_kg = 0.43592;

    cout << "Welcome to the Kilograms to Pounds convertor" << endl;
    cout << "Enter the value in Pounds: ";

    double kgs{ 0.0 };
    double lbs{ 0.0 };
    
    cin >> lbs;
    kgs = lbs * lb_per_kg;

    cout << lbs << " Pounds is equivalent to " << kgs << " Kilograms" << endl;
    cout << endl;
    return 0;
}