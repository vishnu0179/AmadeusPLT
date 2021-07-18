#include <string>
using namespace std;

#include  "Address.h"
#include "Employee.h"

using namespace Lab3;

namespace Lab3
{
    string Employee::GetEmpid()
	{
		return _empid;
	}

	void Employee::SetEmpid(string empid)
	{
		_empid = empid;
	}

    string Employee::GetName()
	{
		return _name;
	}

	void Employee::SetName(string name)
	{
		_name = name;
	}

    char Employee::GetGender()
	{
		return _gender;
	}

	void Employee::SetGender(char gender)
	{
		_gender = gender;
	}

    Address Employee::GetAddress()
	{
		return _address;
	}

	void Employee::SetAddress(Address &address)
	{
		_address = address;
	}

}
