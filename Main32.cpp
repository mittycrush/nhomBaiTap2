// Main32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &day, int &month, int &year)
{
	cout << "Nhap ngay thang nam: ";
	cin >> day >> month >> year;
}
void output(int result)
{
	cout << " La ngay thu bao nhieu " << result;
}
int countDay(int day, int month, int year)
{
	if (month < 3)
	{
		year--;
		month += 12;
	}
	return year * 365 + year / 4 + year / 400 - year / 100 + (153 * month - 457) / 5 + day - 306;
}
void getResult(int day, int month, int year)
{
	int dayInYear = countDay(day, month, year) - countDay(1, 1, year);
	
	int remainYear = countDay(31, 12, year) - countDay(day, month, year);
	output(dayInYear);
	output(remainYear);
}
int main()
{
	int day, month, year;
	input(day, month, year);
	getResult(day, month, year);
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
