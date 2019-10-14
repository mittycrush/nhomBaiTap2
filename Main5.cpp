

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &n)
{
	cout << " Nhap so nguyen n :";
	cin >> n;
}
void output(int results)
{
	cout << " Tong giai thua :"<<results<< endl;
}
// đệ quy tính giai thừa 
int factorial(int n) 
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}
// Đệ quy tính tổng giai thừa 
int sumFactorial(int n) 
{
	if (n == 1)
		return 1;
	return factorial(n) + sumFactorial(n - 1);
}
int main()
{
	int n;
	input(n);
	int sum = sumFactorial(n);
	output(sum);
}

