#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int input_dollars, input_cents, quarter_count, quarter_remainder, dime_count, dime_remainder, nickel_count, nickel_remainder;

	cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
	cin >> input_dollars >> input_cents;

	quarter_count = ((input_dollars * 100) + input_cents) / 25;
	quarter_remainder = ((input_dollars * 100) + input_cents) % 25;
	dime_count = quarter_remainder / 10;
	dime_remainder = quarter_remainder % 10;
	nickel_count = dime_remainder / 5;
	nickel_remainder = dime_remainder % 5;

	/* pennies variable not needed since it is equal to the nickel_remainder value*/

	cout << input_dollars << " Dollars and " << input_cents << " Cents are:" << endl;
	cout << quarter_count << " quarters, " << dime_count << " dimes, " << nickel_count << " nickels and " << nickel_remainder << " pennies." << endl;


	return 0;

}