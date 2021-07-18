#include <iostream>
#include <string>
using namespace std;

#include "Account.h"

namespace Lab2
{
	string Account::GetAccNo()
	{
		return _accNo;
	}

	void Account::SetAccNo(string acc)
	{
		string bankCode = "ICI";
		_accNo = bankCode + acc;
	}

	string Account::GetName()
	{
		return _name;
	}

	void Account::SetName(string name)
	{
		_name = name;
	}

	double Account::GetBalance()
	{
		return _balance + ComputeInterest();
	}
	void Account::SetBalance(double bal)
	{
		_balance = bal;
	}


	double Account::ComputeInterest()
	{
		double interest = _balance * 8.5 / 100.0;
		return interest;
	}
}