// Main10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
 
void input(int &n)
{
	cout << "Nhap so nguyen n"; cin >> n;
}
void output(int results)
{
	cout << " So nghich dao " << results;
}
int flipNumber(int n)
{
	int cout = 0;
	while (n > 0)
	{
		int divide = n % 10;
		cout = cout * 10 + divide;
		n = n / 10;
	}
	return cout;
}
int main()
{
	int n;
	input(n);
	int results = flipNumber(n);
	output(results);
}

