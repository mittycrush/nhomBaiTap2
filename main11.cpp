// main11.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
		cout << " So co doi xung ";
	else cout << " Khong doi xung ";
 
}
int flipNumber(int n)
{
	int results = 0;
	while (n > 0)
	{
		int cout = n % 10;
		results = results * 10 + cout;
		n = n / 10;
	}
	return results;
}
int symmetry(int n)
{
	int flip = flipNumber(n);
	if (n == flip) return 1;
	else return 0;
}

int main()
{
	int n;
	input(n);
	output(symmetry(n));
}



