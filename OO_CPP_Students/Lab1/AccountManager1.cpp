#include <iostream>
#include <string>

using namespace std;

#include "Account.h"
#include "AccountManager1.h"

namespace Lab1
{
	void AccountManager1::FillAccountData(Account& acc)
	{
		acc._accNo = "004701";
		acc._name = "Bahubali";
		acc._balance = 45000.0;
	}

	void AccountManager1::DisplayAccountData(Account& acc)
	{
		cout << "AccNo : " << acc._accNo<< endl;
		cout << "Name : " << acc._name<< endl;
		cout << "Balance : " << acc._balance<< endl;
	}
}