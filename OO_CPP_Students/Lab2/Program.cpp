#include <iostream>
#include <string>

using namespace std;

#include "CustomConsole.h"
#include "Account.h"
#include "AccountManager.h"

using namespace Lab2;

int main(int argc, char* args[])
{
	Account acc;
		
	//Run the code, analyze the code and implement the solution accordingly
	cout << "Performing Account Transactions using AccManager..." << endl ;
	AccountManager *manager = new AccountManager();
	manager->FillAccountData(acc);
	manager->DisplayAccountData(acc);

}
