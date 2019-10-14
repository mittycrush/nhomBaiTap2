// main17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
void input(int &n)
{
	cout << " Nhap so nguyen: "; cin >> n;
}
bool primeNumber(int n)
{
	float half = sqrt(n);
	int count = 2;
	while ((n % count != 0) && (count <= half))
		count++;
	if (count > half) return true;
	else return false;
}
void findPrimeNumber(int n)
{
	int count = 0;
	for (int i = 2; i <= n; i++)
	{   
		
		if (primeNumber(i))
		{
			cout << i << endl;
			count += 1;
		}
	}
	cout << " So cac so nguyen to nho hon: " <<count;

}
int main()
{
	int number;
	input(number);
	findPrimeNumber(number);
}

