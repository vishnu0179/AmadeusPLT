#include <string>
using namespace std;

#include "Employee.h"
#include "SalaryCalculator.h"
#include "RoleBuilder.h"

namespace Lab11
{
    Employee::Employee() {
        
    }

    Employee::Employee(string empid, string name, double basic, double hra, double allowancePercentage, int role)
    {
        _empid = empid;
        _name = name;
        _basic = basic;
        _hra = hra;
        _allowancePercentage = allowancePercentage;
        _role = role;
    }

    string Employee::GetEmpId()
	{
		return _empid;
	}

	void Employee::SetEmpId(string empid)
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

	double Employee::GetBasic()
	{
		return _basic;
	}

	void Employee::SetBasic(double basic)
	{
		_basic = basic;
	}

	double Employee::GetHRA()
	{
		return _hra;
	}

	void Employee::SetHRA(double hra)
	{
		_hra = hra;
	}

	double Employee::GetAllowancePercentage()
	{
		return _allowancePercentage;
	}

	void Employee::SetAllowancePercentage(double allowancePercentage)
	{
		_allowancePercentage = allowancePercentage;
	}

	int Employee::GetRole()
	{
		return _role;
	}

	void Employee::SetRole(int role)
	{
		_role = role;
	}

	       
	double Employee::GetSalary()
    {
        //Delegation
        return SalaryCalculator::GetSalary(*this);
            
    }
	       
	double Employee::GetAllowance()
    {
        //Delegation
        return SalaryCalculator::GetAllowance(*this);
            
    }

	
	string Employee::GetRoleDescription()
	{
		//Delegation
		return RoleBuilder::GetRoleDescription(_role);
	}
}
