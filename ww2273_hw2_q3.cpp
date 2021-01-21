#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int MINUTES_IN_HOUR = 60;
	const int MINUTES_IN_DAY = MINUTES_IN_HOUR * 24;
	int John_days, John_hours, John_minutes, Bill_days, Bill_hours, Bill_minutes, total_minutes, hours_worked, days_worked, minutes_worked;

	cout << "Please	enter the number of days John has worked: ";
	cin >> John_days;
	cout << "Please enter the number of hours John has worked: ";
	cin >> John_hours;
	cout << "Please enter the number of minutes John has worked: ";
	cin >> John_minutes;
	cout << endl;
	cout << "Please enter the number of days Bill has worked: ";
	cin >> Bill_days;
	cout << "Please enter the number of hours Bill has worked: ";
	cin >> Bill_hours;
	cout << "Please enter the number of minutes Bill has worked: ";
	cin >> Bill_minutes;

	total_minutes = ((John_days + Bill_days) * MINUTES_IN_DAY) + ((John_hours + Bill_hours) * MINUTES_IN_HOUR) + (John_minutes + Bill_minutes);
	days_worked = total_minutes / MINUTES_IN_DAY;
	hours_worked = (total_minutes % MINUTES_IN_DAY)/MINUTES_IN_HOUR;
	minutes_worked = (total_minutes % MINUTES_IN_DAY) % MINUTES_IN_HOUR;

	cout << endl;
	cout << "The total time both of them worked together is: " << days_worked << " days, " << hours_worked << " hours and " << minutes_worked << " minutes." << endl;


	return 0;

}