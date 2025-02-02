// 04. Toy Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	const double PUZZLE_PRICE = 2.60, DOLL_PRICE = 3, TEDDY_PRICE = 4.10, 
		MINION_PRICE = 8.20, TRUCK_PRICE = 2;

	double tripPrice;
	int puzzles, speakingDolls, teddyBears, minions, trucks;
	cin >> tripPrice >> puzzles >> speakingDolls >> teddyBears >> minions >> trucks;
	
	int toysCount = puzzles + speakingDolls + teddyBears + minions + trucks;
	double orderPrice = puzzles * PUZZLE_PRICE + speakingDolls * DOLL_PRICE + teddyBears * TEDDY_PRICE
		+ minions * MINION_PRICE + trucks * TRUCK_PRICE;

	if (toysCount >= 50) {
		orderPrice -= 0.25 * orderPrice;
	}

	double profit = orderPrice -= 0.1 * orderPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (profit >= tripPrice) {
		cout << "Yes! " << profit - tripPrice << " lv left." << endl;
	}
	else if (profit < tripPrice){
		cout << "Not enough money! " << tripPrice - profit << " lv needed." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

