#pragma once

namespace Lab2
{
	class AccountManager
	{
		/// <summary> 
		/// Method to fill account details into the account object passed
		/// </summary>
		/// <param name="Acc"></param>
	public:
		void FillAccountData(Account& Acc);

		/// <summary>
		/// Method to display account details from the account object passed
		/// </summary>
		/// <param name="Acc"></param>
		void DisplayAccountData(Account& Acc);
	};
}
