// main9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &a, int &b, int &n)
{
	
	cout << "Nhap so nguyen n:"; cin>> n;
	cout << " Nhap so nguyen a:"; cin>> a;
	cout << " Nhap so nguyen b:"; cin>> b;

	
}
void output(int results)
{
	cout << " Tong so nguyen  " << results;
}
int sumLess(int a, int b, int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if ((i % a == 0) && (i % b != 0))
			sum += i;
	}
	return sum;
}
int main()
{
	int a, b, n;
	input(a, b, n);
	output(sumLess(a, b, n));
}

