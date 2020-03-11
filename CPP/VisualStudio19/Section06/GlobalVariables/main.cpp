// Section 6
// Global and local variables 

#include <iostream>

using namespace std;

int age{ 18 }; // Global variable - auto init to 0

int main() {

    int age{ 16 };    // local variable - to this function only

    cout << age << endl;

    return 0;
}

