#pragma once

namespace Lab1
{
	class AccountManager2
	{
		/// <summary> 
		/// Method to fill account details into the account object passed
		/// </summary>
		/// <param name="Acc"></param>
	public:
		void FillAccountData(Account& acc);

		/// <summary>
		/// Method to display account details from the account object passed
		/// </summary>
		/// <param name="Acc"></param>
		void DisplayAccountData(Account& acc);
	};
}
