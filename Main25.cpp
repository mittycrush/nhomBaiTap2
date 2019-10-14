// Main25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(double  &n)
{
	cout << "Nhap so nguyen n: "; cin >> n;
}
void output(double result)
{
	cout << "S(n)= " << result;
}
double sum(double  n)
{
	double result = 0;
	for (double  i = 1; i <= n; i++)
		result += i;
	return result;
}
double factorial(double  n)
{
	if (n == 1)  return 1;
	return n * factorial(n - 1);
}
double process(double  n)
{
	if (n == 1) return 1;
	return (sum(n) / factorial(n)) + process(n - 1);

}
int main()
{
	double  n;
	input(n);
	double result = process(n);
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
