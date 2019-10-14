// main14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

void input(int &n)
{
	cout << " Nhap so nguyen n: "; cin >> n;
}
void output(int check)
{
	if (check == 1)
		cout << " Gom toan bo chu so chan ";
	else cout << " Khong gom toan bo chu so chan ";
}
bool evenNumber(int n)
{
	//if (n == 0) return true;
	if (n % 2 == 0)
		return true;
	else return false;
}
int checkAllEvenNumeral(int number)
{
	int count ;
	while (number > 0) 
	{
		count = number % 10;
		if ( !evenNumber(count) ) return 0;
		number /= 10;
	}
	return 1;
	//if (number <= 0) return 1;
	//else return 0;
}
int main()
{
	int number;
	input(number);
	int check = checkAllEvenNumeral(number);
	output(check);
}

