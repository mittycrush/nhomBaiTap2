// Main3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>

void input(float &n)
{
	printf(" Nhap so nguyen n ");
	scanf_s("%f", &n);
}
void output(double s)
{
	printf(" Tong nghich dao : %lf ",s);
}
double sumInverse(int n) // Dung for co ban
{
	double i;
	double sum=0;
	for (i = 1; i <= n; i++)
	{
		sum += (1 / i);
	}
	return sum;
}
double inverse(float n)
{
	if (n == 1)
		return 1;
	return 1 / n + inverse(n - 1);
}
int main()
{
	float n;
	input(n);
	double s = inverse(n);
	output(s);
}
