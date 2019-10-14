// Main16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &a, int &b)
{
	cout << "Nhap so a: "; cin >> a;
	cout << "Nhap so b: "; cin >> b;
}
void output(int divisor)
{
	cout << " Uoc chung lon nhat: " << divisor;
}
int findDivisor(int a, int b)
{
	while (a != b)
	{
		if (b > a)   b -= a;
		else  a -= b;
	}
	return a;
}
int main()
{
	int a, b;
	input(a, b);
	int divisor = findDivisor(a, b);
	output(divisor);
}

