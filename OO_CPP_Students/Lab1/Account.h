#pragma once

namespace Lab1
{
	class AccountManager1;
	class Account
	{
		friend class AccountManager1;
		/// <summary>
		/// Fields for the class
		/// </summary>
		string _accNo;
		string _name;
		double _balance;

		/// <summary>
		/// Properties for the fields
		/// </summary>
	public:
		string GetAccNo();

		void SetAccNo(string acc);

		string GetName();

		void SetName(string name);

		double GetBalance();

		void SetBalance(double bal);

		/// <summary>
		/// Method to calculate the interest for an account
		/// </summary>
		/// <returns>Interest</returns>
	private:
		double ComputeInterest();
	};
}
