#include <iostream>
using namespace std;
#include "BankAccount.h"

int main()
{
	//User input vars
	int choice;
	double amt;

   //Initialize Bank Accounts
	BankAccount cust1("Lucy", 500.00);
	BankAccount cust2("Stella", 0.00);
	BankAccount cust3("Ella", 1000.00);

	//Transactions
	cust1.debitAcct(50.00);

	cust2.creditAcct(150.00);

	cout << "\nHello " << cust3.getName() << ", will you be making a:\n1.\tDeposit\n2.\tWithdrawal\n";
	cin >> choice;
	if (choice == 1) {
		cout << "How much will you be depositing?  ";
		cin >> amt;
		cust3.creditAcct(amt);
	}
	else if (choice == 2) {
		cout << "How much will you be withdrawing today?  ";
		cin >> amt;
		cust3.debitAcct(amt);
	}
	else {
		cout << "Invalid input. Transaction terminated" << endl;
	}

}
