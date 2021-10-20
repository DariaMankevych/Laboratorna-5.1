// Laboratorna 5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double y); // прототип
int main()
{
	double t, s;
		cout << "t = "; cin >> t;
	    cout << "s = "; cin >> s;

	double c = (f(t, s, 2) + f(1, s + t, t - s)) / (1 + f(1, 1, t * t + s * s) * f(1, 1, t * t + s * s));

	cout << "c = " << c << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return (a + b + c) / (sin(a * b) * sin(a * b) + c * c);
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
