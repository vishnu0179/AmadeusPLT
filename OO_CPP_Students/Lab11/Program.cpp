#include <iostream>
#include <string>

using namespace std;

#include "CustomConsole.h"
#include "Roles.h"
#include "RoleBuilder.h"
#include "Employee.h"
#include "EmployeeReport.h"

using namespace Lab11;

int main(int argc, char *argv[])
{
    //Employee array to hold the employees' information
	const int SIZE = 2;
	Employee employees[SIZE];
    Employee emp;

    string empId, name, reportDate;
    double allowancePercentage, basic, hRA;
    int role;

    //Accept employee information from the user
    cout << "Enter employee information" << endl;

    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Employee No : " << (i + 1) << endl;
        cout << "Id : ";
        empId = CustomConsole::ReadString();
        emp.SetEmpId(empId);

        cout << "Name : ";
        name = CustomConsole::ReadString();
        emp.SetName(name);

        cout << "Basic : ";
        basic = CustomConsole::ReadDouble();
        emp.SetBasic(basic);

        cout << "HRA : ";
        hRA = CustomConsole::ReadDouble();
        emp.SetHRA(hRA);

        cout << "Percentage of Allowance : ";
        allowancePercentage = CustomConsole::ReadDouble();
        emp.SetAllowancePercentage(allowancePercentage);

        cout << "Enter Role Id : " << endl;
        cout << Roles::DEVELOPER << ". " << RoleBuilder::GetRoleDescription(Roles::DEVELOPER) << endl;
		cout << Roles::TEST_ENGINEER << ". " << RoleBuilder::GetRoleDescription(Roles::TEST_ENGINEER) << endl;
        cout << Roles::SR_DEVELOPER << ". " << RoleBuilder::GetRoleDescription(Roles::SR_DEVELOPER) << endl;
        cout << Roles::DESIGNER << ". " << RoleBuilder::GetRoleDescription(Roles::DESIGNER) << endl;
        role = CustomConsole::ReadInt();

        //Write your code here
        emp.SetRole(role);
        employees[i] = emp;      
    }

	cout << "Enter the date of the report (dd/mm/yyyy) : " << endl;
    reportDate = CustomConsole::ReadString();
    
    EmployeeReport empReport(reportDate);
    // empReport.SetReportDate(reportDate);
    empReport.DisplayEmployees(SIZE, employees);
    //Write your code here

}