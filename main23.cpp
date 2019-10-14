// main23.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	cout << " So cac uoc nguyen to: " << amount;
}
bool isPrime(int n)
{
    for (int i = 2; i <=  sqrt(n); i++)
			if (n % i == 0) return false;
	return true;
}
int divisorPrime(int n)
{
	int count = 0;
	for (int i = 2; i <= n/2 ; i++)
	{
		if ( n % i ==0 && isPrime(i)) count += 1;
	}
	return count;
}
int main()
{
	int n;
	input(n);
	
	int result = divisorPrime(n);
	output(result);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
