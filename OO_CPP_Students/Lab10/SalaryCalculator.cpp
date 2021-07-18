#include <string>
using namespace std;

#include "Employee.h"
#include "SalaryCalculator.h"

namespace Lab10
{
	double SalaryCalculator::GetSalary(Employee& emp)
	{
		double salary = 0.0;
		salary  = emp.GetBasic() + emp.GetHRA() + GetAllowance(emp);
		return salary;
	}

	double SalaryCalculator::GetAllowance(Employee& emp)
	{
		double allowance = 0.0;
		allowance = (emp.GetBasic() * emp.GetAllowancePercentage())/100;
		return allowance;
	}
}