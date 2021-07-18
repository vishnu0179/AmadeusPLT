#include <iostream>
#include <string>

using namespace std;

#include "CustomConsole.h"
#include "Account.h"
#include "AccountManager.h"

namespace Lab2
{
	void AccountManager::FillAccountData(Account& acc)
	{
		// Implement
		CustomConsole *cc = new CustomConsole();
		cout<<"Enter your account number: "<<endl;
		string acc_no = cc->ReadString();
		cout<<"Enter your name: "<<endl;
		string acc_holder_name = cc->ReadString();
		cout<<"Enter your balance: "<<endl;
		double blnc = cc->ReadDouble();
		acc.SetAccNo(acc_no);
		acc.SetName(acc_holder_name);
		acc.SetBalance(blnc);
	}

	void AccountManager::DisplayAccountData(Account& acc)
	{
		//Implement
		cout << "AccNo : "  <<  acc.GetAccNo() << endl;
		cout << "Name : "  <<  acc.GetName() << endl;
		cout << "Balance : "  << acc.GetBalance() << endl;
	}
}