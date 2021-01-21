#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int quarters_count, nickels_count, dimes_count, pennies_count, dollars_total, cents_subtotal, cents_total;

	cout << "Please enter the number of coins:" << endl;
	cout << "# of Quarters: ";
	cin >> quarters_count;
	cout << "# of Dimes: ";
	cin >> dimes_count;
	cout << "# of Nickels: ";
	cin >> nickels_count;
	cout << "# of Pennies: ";
	cin >> pennies_count;


	cents_subtotal = ((quarters_count * 25) + (dimes_count * 10) + (nickels_count * 5) + (pennies_count));
	dollars_total = (cents_subtotal / 100);
	cents_total = (cents_subtotal % 100);

	cout << "The total is " << dollars_total << " dollars and " << cents_total << " cents." << endl;

	return 0;


}