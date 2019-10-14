// Main2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>

void input(int &n)
{
	printf(" Nhap so nguyen n : ");
	scanf_s("%d", &n);
}

void output(int n, int s)
{
	printf(" tong binh phuong tu 1 den %d : %d ", n, s);
}
int recursive(int n)
{
	if (n == 1)
		return 1;
	else return (n * n + recursive(n - 1));
}

int main()
{
	int n;
	input(n);
	int sum = recursive(n);
	output(n,sum);
}

