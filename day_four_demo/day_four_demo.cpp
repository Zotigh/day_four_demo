// day_four_demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//assignment
	//int a, b, c;
	//a = b = c = 0;
	//cout << "a: " << a << "b: " << b << "c: " << c << "\n\n";

	//Fractional Calculations
	double x;
	x = 2 + 5.0 * 4 - 6.0 * 7 / 2;
	cout << "x: " << x << "\n";

	double y;
	y = (2 + 5.0) * 4 - (6.0 * 7 / 2);
	cout << "y: " << y << "\n";

	double z;
	z = 2 + (5.0 * 4 - 6.0) * 7 / 2;
	cout << "z: " << z << "\n";

	double q;
	q = 2 + 5.0 * (4 - 6.0 * 7) / 2;
	cout << "q: " << q << "\n";

	double v,
		a = 1,
		b = 2,
		c = 3,
		d = 4;
	v = (a + b) * (c - d);
	cout << "v: " << v << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
