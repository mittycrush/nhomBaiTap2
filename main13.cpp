// main13.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	cout << " So chu so nguyen to la: " << amount;
}
bool primeNumber(int n)
{
	int i = 2;
	if (n == 0) return false;
	int half = sqrt(n);
	while ((n % i != 0) && (i<= half))
		i++;
	if (i > half) return true;
	else return false;
}
int amountPrime(int number)
{
	int count = 0;
	while (number > 0)
	{
		int numeral = number % 10;
		if (primeNumber(numeral))
			count += 1;
		number /= 10;
	}
	return count;
}
int main()
{
	int number;
	input(number);
	int amount = amountPrime(number);
	output(amount);
}

