#include <iostream>
#include <string>
using namespace std;

#include "Account.h"
#include "AccountManager1.h"
#include "AccountManager2.h"

using namespace Lab1;

int main(int argc, char* args[])
{ 
            
	Account acc;

	cout << "Performing Account Transactions using Account Manager 1..." << endl;
	AccountManager1 *manager1 = new AccountManager1();
	manager1->FillAccountData(acc);
	manager1->DisplayAccountData(acc);
            
	cout << endl;

	cout << "Performing Account Transactions using Account Manager 2..." << endl;
	AccountManager2 *manager2 = new AccountManager2();
	manager2->FillAccountData(acc);
	manager2->DisplayAccountData(acc);
            
}
