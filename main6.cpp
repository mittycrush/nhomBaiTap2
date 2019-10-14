// main6.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void output(int n)
{
	if (n == 1)
		cout << " Day la so chinh phuong " << endl;
	else cout << " Khong phai so chinh phuong ";
}
int squareRoot(int n)
{
	bool check = ((sqrt(n) - (int)sqrt(n)) == 0 );

	if (check) 
		return 1;
	else return 0;
}
int main()
{
	int n;
	input(n);
	output(squareRoot(n));
}

