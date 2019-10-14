// Main8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
 
using namespace std;
 
void input(int &n)
{
	cout << "Nhap so nguyen n :";
	cin >> n;
}
void output(int check)
{
	if (check == 1)
		cout << " So hoan hao ";
	else cout << " Khong phai so hoan hao ";
}
int perfectNumber(int n)
{
	int results = 0;
	int half = (float)n / 2;
	for (int i = 1; i <= half; i++)
	{
		if (n % i == 0)
			results += i;
	}
	if (results == n) return 1;
	else return 0;
}
int main()
{
	int n;
	input(n);
	output(perfectNumber(n));
}

