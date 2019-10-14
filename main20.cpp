// main20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

void input(int &n)
{
	cout << "Nhap so nguyen n: "; cin >> n;
}
void output(int amount)
{
	cout << " so luong so chinh phuong: " << amount;
}
void squareRoot(int n, int &amount)
{
	amount = 0;
	for (int i = 1; i <= n; i++)
	{
		bool check = (sqrt(i) - floor(sqrt(i))) == 0;
		if (check)
		{
			cout << i << endl;
			amount += 1;
		}
	}
}
int main()
{
	int n, amount;
	input(n);
	squareRoot(n, amount);
	output(amount);
}

