// Main4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &n)
{
	cout << " Nhap so nguyen n : ";
	cin >> n;

}
void output(int n,  int results)
{
	cout << " Giai thua tu 1 den " << n << " : " << results;
}
int giaiThua1(int n)
{
	int results = 1;
	for (int i = 1;  i <= n; i++)
	{
		results *= i;
	}
	return results;

}
int giaiThua2(int n)
{
	if (n == 1) return 1;
	return n * giaiThua2(n - 1);
}
int giaiThua3(int n)
{
	int array[1000];
	array[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		array[i] = array[i - 1] * i;
	}
	return array[n];
}
int main()
{
	int n;
	input(n);
	int gt1 = giaiThua1(n);
	int gt2 = giaiThua2(n);
	int gt3 = giaiThua3(n);
	output(n,gt1);
	output(n,gt2);
	output(n,gt3);

}

