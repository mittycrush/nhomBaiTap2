// Main31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &y1, int &y2, int &m1, int &m2, int &d1, int &d2)
{
	cin >> y1 >> m1 >> d1; 
	cin >> y2 >> m2 >> d2;
}
void output(int result)
{
	cout << result;
}
int countDay(int year, int month, int day)
{
	if (month < 3)
	{
		month += 12;
		year--;
	}
	return year * 365 + year / 100 + year / 400 - year / 100 + (153 * month - 457) / 5 + day - 306;
}
int distanceDay(int y1, int y2, int m1, int m2, int d1, int d2)
{
	return countDay(y2, m2, d2) - countDay(y1, m1, d1);
}
int main()
{
	int y1,  m1, d1;
	int y2, m2, d2;
	input(y1, y2, m1, m2, d1, d2);
	int day = distanceDay(y1, y2, m1, m2, d1, d2);
	output(day);
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
