// Main12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &n)
{
	cout << "Nhap so nguyen n "; cin >> n;
}
void output(int number)
{
	cout << "Chu so lon nhat la : " << number;
}
int biggestNumber(int n)
{
	int max=0;
	while (n > 0)
	{
		int cout = n % 10;
		if (cout >= max) max = cout;
		n = n / 10;
	}
	return max;
}
int main()
{
	int n;
	input(n);
	int number = biggestNumber(n);
	output(number);
}

