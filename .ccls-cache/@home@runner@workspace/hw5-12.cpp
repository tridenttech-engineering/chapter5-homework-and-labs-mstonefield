// hw5-12.cpp - Calculates total amount owed in a Buy One, Get One Half Off (BoGoHo) sale
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
		double price1 = 0.0, price2 = 0.0;
		double lowerPrice = 0.0, higherPrice = 0.0;
		double totalCost = 0.0;

		// Input: Get item prices
		cout << "Enter price of first item: ";
		cin >> price1;
		cout << "Enter price of second item: ";
		cin >> price2;

		// Determine which item is cheaper
		if (price1 < price2) {
				lowerPrice = price1;
				higherPrice = price2;
		} else {
				lowerPrice = price2;
				higherPrice = price1;
		}

		// Apply 50% discount on the lower-priced item
		totalCost = higherPrice + (lowerPrice * 0.5);

		// Output: Display total cost in fixed-point notation
		cout << fixed << setprecision(2);
		cout << "Total amount owed: $" << totalCost << endl;

		return 0;
}
