//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
		const double MEMBER_DISCOUNT = 0.1;  // 10% discount for members
		const double NON_MEMBER_DISCOUNT = 0.05; // 5% discount for non-members
		const double SHIP_CHG1 = 0.99;
		const double SHIP_CHG2 = 4.99;
		double amtOwed = 0.0;
		char member = ' ';

		// Enter input items
		cout << "Amount owed before any discount and shipping: ";
		cin >> amtOwed;
		cout << "Premier Club member (Y/N)? ";
		cin >> member;

		// Apply discounts
		if (toupper(member) == 'Y')
				amtOwed -= amtOwed * MEMBER_DISCOUNT;  // 10% discount for members
		else
				amtOwed -= amtOwed * NON_MEMBER_DISCOUNT; // 5% discount for non-members

		// Add shipping charges
		if (amtOwed >= 100.0)
				amtOwed += SHIP_CHG1;
		else
				amtOwed += SHIP_CHG2;

		// Display final amount owed
		cout << fixed << setprecision(2);
		cout << "Amount owed after any discount and shipping: " << amtOwed << endl;

		return 0;
}
