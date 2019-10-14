// Main7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

void input(int &n)
{
	cout << " Nhap so nguyen n ";
	cin >> n;
}
void output(int check)
{
	if (check == 1)
		cout << "So nguyen to ";
	else cout << " Khong phai so nguyen to ";
}
int primeNumber(int n)
{
	int i = 2;
	double results = sqrt(n);
	while ((n % i != 0) && (i <= results))
		i++;
	if (i > results) return 1;
	else return 0;
}
int main()
{
	int n;
	input(n);
	output(primeNumber(n));
}

