// main26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

void input(int &n)
{
	cout << " Nhap phan tu thu n: "; cin >> n;
}
int fibonacci(int n)
{
	int fibo[1000];
	fibo[0] = 1;
	fibo[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	return fibo[n];
}
void output(int result)
{
	cout << result << " ";
}
int main()
{
	int n;
	input(n);
	for (int i = 1; i <= n; i++)
		output(fibonacci(i));

}

