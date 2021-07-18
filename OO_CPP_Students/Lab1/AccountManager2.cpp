#include <iostream>
#include <string>

using namespace std;

#include "Account.h"
#include "AccountManager2.h"

namespace Lab1
{
	void AccountManager2::FillAccountData(Account& acc)
	{
		acc.SetAccNo("004701");
		acc.SetName("Bahubali");
		acc.SetBalance(45000.0);
	}

	void AccountManager2::DisplayAccountData(Account& acc)
	{
		cout << "AccNo : "  <<  acc.GetAccNo() << endl;
		cout << "Name : "  <<  acc.GetName() << endl;
		cout << "Balance : "  << acc.GetBalance() << endl;
	}
}