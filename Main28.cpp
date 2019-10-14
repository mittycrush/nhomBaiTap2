// Main28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

void input(int &n, double &x)
{
	cout << " Nhap n "; cin >> n;
	cout << " Nhap x "; cin >> x;
}
void output(double result)
{
	cout << "S = " << roundf(result * 100) / 100;
}
int factorial(int n)
{
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}
double getResult(int n, double x)
{
	double result = 0;
	for (int i = 0; i <= n; i++)
	{
		result += pow(x, i) / factorial(i);
	}
	return result;
}
int main()
{
	int n;
	double x;
	input(n, x);
	double result = getResult(n, x);
	output(result);
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
