// Main35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using  namespace std;

void input(int &a, int &b, int &c, int &d)
{
	cout << "nhap a, b, c, d: ";
	cin >> a >> b >> c >> d;
}
void output(int numerator, int denominator)
{
	cout << "ket qua cua phep cong hai phan so: " << endl;
	cout << numerator << endl;
	cout << "_______" << endl;
	cout << denominator;
}
int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
void sumFraction(int a, int b, int c, int d, int &numer, int &demon)
{
	int result1 = a * d + b * c;
	int result2 = b * d;
	int commonFactor = UCLN(result1, result2);
	numer = result1 / commonFactor;
	demon = result2 / commonFactor;
}
int main()
{
	int a, b, c, d;
	input(a, b, c, d);
	int numer, demon;
	sumFraction(a, b, c, d,numer,demon);
	output(numer, demon);
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
