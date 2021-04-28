#pragma once
class BankAccount
{
private:

	string name;
	double acctBal;

public:

	BankAccount(string setName, double setBal)	//Setter
	{
		name = setName;
		acctBal = setBal;
	}

	void creditAcct(double deposit)	//Credit function
	{
		acctBal += deposit;
		cout << name << ", your new balance is: " << acctBal << endl;	//Output for user
	}

	void debitAcct(double withdrawal)	//Debit function
	{
		if (withdrawal > acctBal) {		//Disallow overdrafts

			cout << "Overdraft not allowed on account. Debit denied" << endl;		
		}
		else {

			acctBal -= withdrawal;	//Actual withdrawal
			cout << name << ", your new balance is: " << acctBal << endl;	//Output for user
		}
		
	}

	string getName()	//Getter
	{
		return name;
	}

	//void userFx()
	//{
	//	string choice;

	//	cout << "Hello " << name << ", will you be making a deposit of withdrawal today?\n";
	//	cin >> choice;
	//	if (choice == "deposit" || "Deposit") {
	//		debitAcct();
	//	}
	//}
};

