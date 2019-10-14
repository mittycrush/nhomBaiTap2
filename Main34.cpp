// Main34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &n, int &k)
{
	cout << " Nhap n: "; cin >> n;
	cout << "Nhap chap k: "; cin >> k;
}
void output(int result)
{
	cout << "To hop n chap k: " << result;
}
int factorial(int n)
{
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}
int combiantion(int n, int k)
{
	int result = ( (double)factorial(n) / (factorial(k) * factorial(n - k) ) );
	return result;
}
int main()
{
	int n, k;
	input(n, k);
	int combie = combiantion(n, k);
	output(combie);
    
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
