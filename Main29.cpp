// Main29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void input(int &money) 
{
	cout << "Nhap so tien : "; cin >> money;
}
int countMoney(int &money, int price ) {
	int count;
    count = money / price;
	money -= count * price;
	return count;
}
void withdrawal(int money) {
	int money100 = 100000; int count100=0;
	int money50 = 50000; int count50=0;
	int money20 = 20000; int count20=0;
	int money10 = 10000; int count10=0;
	while (money > 0)
	{
		if (money >= money100 ) 
			count100 = countMoney(money, money100);
	
		if (money >=money50)
			count50 = countMoney(money, money50);
		
		if (money >= money20 )
			count20 = countMoney(money, money20);
		
		if (money >= money10)
			count10 = countMoney(money, money10);
	}
	cout << money100 << " " << money50 << " " << money20 << " " << money10 << endl;
	cout << count100 << " " << count50 << " " << count20 << " " << count10;
    
}
int main()
{
	int money;
	input(money);
	withdrawal(money);
	return 0;
	
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
