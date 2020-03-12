// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

	//int dollars{ 100 }, quarters{ 25 }, dimes{ 10 }, nickles{ 5 }, pennies{ 1 };
	//int num_dollars{ 0 }, num_quarters{ 0 }, num_dimes{ 0 }, num_nickles{ 0 }, num_pennies{ 0 };
	//int inCents{ 0 };
	//int working{ 0 };

	//cout << "Enter an amount in cents: ";
	//cin >> inCents;

	//working = inCents - quarters;
	//if (working >= 25) num_quarters++; // .67 left 1 quarter
	//cout << working << endl;
	//
	//if (working >= 25) num_quarters++;  // .42 left 1 quarter
	//working = working - 25;
	//cout << working << endl;

	//if (working >= 25) num_quarters++; // .17 left 1 quarter
	//working = working - 25;
	//cout << working << endl;

	//if (working >= 10) num_dimes++; // .17 left 1 quarter
	//working = working - 10;
	//cout << working << endl;

	//if (working >= 10) num_dimes++; // .17 left 1 quarter
	//working = working - 10;
	//cout << working << endl;

 //   cout << "You can provide this change as follows :" << endl;
	//cout << "dollars : " << num_dollars << endl;
	//cout << "Quarters: " << num_quarters << endl;
	//cout << "Dimes   : " << num_dimes << endl;
	//cout << "Nickles : " << num_nickles << endl;
	//cout << "Pennies : " << num_pennies << endl;

	// Solution 1 - not using the modulo operator

	// define conversion values in cents
	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };

	int change_amount{};

	cout << "Enter an amount in cents : ";
	cin >> change_amount;

	int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

	dollars = change_amount / dollar_value;
	cout << dollars << endl;
	balance = change_amount - (dollars * dollar_value);
	cout << balance << " " << dollars << " " << dollar_value << endl;
	
	quarters = balance / quarter_value;
	balance -= quarters * quarter_value;
	cout << balance << " " << quarters << " " << quarter_value << endl;

	dimes = balance / dime_value;
	balance -= dimes * dime_value;
	cout << balance << " " << dimes << " " << dime_value << endl;

	nickels = balance / nickel_value;
	balance -= nickels * nickel_value;
	cout << balance << " " << nickels << " " << nickel_value << endl;

	pennies = balance;

	cout << "\nYou can provide this change as follows : " << endl;
	cout << "dollars  : " << dollars << endl;
	cout << "quarters : " << quarters << endl;
	cout << "dimes    : " << dimes << endl;
	cout << "nickels  : " << nickels << endl;
	cout << "pennies  : " << pennies << endl;
    return 0;
}


