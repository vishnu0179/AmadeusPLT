#include <iostream>
#include <string>

using namespace std;

#include "Employee.h"
#include "RoleBuilder.h"
#include "SalaryCalculator.h"
#include "EmployeeReport.h"

namespace Lab9
{
	string EmployeeReport::GetReportDate()
	{
		return _reportDate;
	}

	void EmployeeReport::SetReportDate(string reportDate)
	{
		_reportDate = reportDate;
	}

	void EmployeeReport::PrintLine()
	{
		cout << "---------------------------------------------------------------------------" << endl;
	}

	void EmployeeReport::DisplayHeader()
	{
		PrintLine();
		cout << "EMPLOYEE REPORT\t\t\t\t" << endl;
		cout << "Date : " << GetReportDate() << endl;
		PrintLine();
	}

	void EmployeeReport::DisplayFooter(int count)
	{
		PrintLine();
		cout << "Total Employees : "<< count << endl;
		PrintLine();
	}

	void EmployeeReport::DisplayEmployees(int count, Employee *employees)
	{
		DisplayHeader();

		cout << "EMP_ID\tNAME\tROLE\t\tBASIC\tHRA\tALLOW\tSALARY" << endl;
		PrintLine();
		for(int i = 0; i < count; i++)
		{
			cout<<employees[i].GetEmpId()<<"\t";
			cout<<employees[i].GetName()<<"\t";
			cout<<RoleBuilder::GetRoleDescription(employees[i].GetRole())<<"\t";
			cout<<employees[i].GetBasic()<<"\t";
			cout<<employees[i].GetHRA()<<"\t";
			cout<<SalaryCalculator::GetAllowance(employees[i])<<"\t";
			cout<<SalaryCalculator::GetSalary(employees[i])<<endl;
		}

		DisplayFooter(count);
		//Write code here

	}
}