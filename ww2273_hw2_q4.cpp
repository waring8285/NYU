#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int input_1, input_2, add, subtract, multiply, div, mod;
	float divide; 

	cout << "Please enter two integers, separated by a space:" << endl;
	cin >> input_1 >> input_2;

	add = input_1 + input_2;
	subtract = input_1 - input_2;
	multiply = input_1 * input_2;
	divide = (float)input_1 / (float)input_2;
	div = input_1 / input_2;
	mod = input_1 % input_2;

	cout << input_1 << " + " << input_2 << " = " << add << endl;
	cout << input_1 << " - " << input_2 << " = " << subtract << endl;
	cout << input_1 << " x " << input_2 << " = " << multiply << endl;
	cout << input_1 << " / " << input_2 << " = " << divide << endl;
	cout << input_1 << " div " << input_2 << " = " << div << endl;
	cout << input_1 << " mod " << input_2 << " = " << mod << endl;

	return 0;

}