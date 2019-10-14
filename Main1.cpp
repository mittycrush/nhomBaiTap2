

#include "pch.h"
#include<stdio.h>

void input(int &n)
{
	printf(" Nhap so nguyen n ");
	scanf_s("%d", &n);
}
int recursive(int n) // de quy 
{
	if (n == 1)
		return 1;
	else return n + recursive(n - 1);

}
int recursive2(int n)
{
	
}
void output(int S, int n)
{
	printf(" Tong tu 1 den %d = %d", n, S);
}
int main()
{
	int n;
	input(n);
	int sum = recursive2(n);
	output(sum, n);

}

