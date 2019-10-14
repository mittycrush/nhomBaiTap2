// main15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &n)
{
	cout << "Nhap so nguyen n: ";
	cin >> n;

}
void output(bool check)
{
	if (check) cout << "So nguyen co tang giam !";
	else cout << "So nguyen khong co tang giam !";
}
bool increaseNumber(int number)
{
	int compare = 10;
	
	while (number > 0)
	{
		int count = number % 10;
		if (compare < count) return false;
		else compare = count;
		number /= 10;
	}
	return true;
}
bool decreaseNumber(int number)
{// compare là biến đệm để so sánh 
	int compare = 0;
	while (number > 0)
	{   //cout là chữ số được lấy từ phép chia lấy dư
		int count = number % 10;
		if (compare > count) return false;
		else compare = count;
		number /= 10;
	}
	return true;
}
bool checkInOrDec(int number)
{
	if (increaseNumber(number) || decreaseNumber(number)) return true;
	else return false;
}
int main()
{ 
	int n;
	input(n);
	output(checkInOrDec(n));
}

