// main18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &n)
{
	cout << "Nhap so nguyen n";
	cin >> n;
}
void output(int amount)
{
	cout << " So cac so hoan hao: " << amount;
}
bool perfectNumber(int n)
{
	float half = n / 2;
	int sumDiv = 0;
	for (int i = 1; i <= half; i++)
	{
		if (n % i == 0) sumDiv += i;
	}
	if (sumDiv == n) return true;
	else return false;
}
void findPerfectNumber(int n, int &count)
{
	count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (perfectNumber(i))
		{
			cout << i << endl;
			count += 1;
		}
	}
}
int main()
{
	int n,count;
	input(n);
	findPerfectNumber(n, count);
	output(count);
}

