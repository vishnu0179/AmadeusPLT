#include <iostream>
#include <string>

using namespace std;

#include "CustomConsole.h"
#include "Roles.h"
#include "RoleBuilder.h"
#include "Employee.h"
#include "EmployeeReport.h"

using namespace Lab10;

int main(int argc, char *argv[])
{
    //Employee array to hold the employees' information
	const int SIZE = 2;
	Employee employees[SIZE];

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

        cout << "Name : ";
        name = CustomConsole::ReadString();

        cout << "Basic : ";
        basic = CustomConsole::ReadDouble();

        cout << "HRA : ";
        hRA = CustomConsole::ReadDouble();

        cout << "Percentage of Allowance : ";
        allowancePercentage = CustomConsole::ReadDouble();

        cout << "Enter Role Id : " << endl;
        cout << Roles::DEVELOPER << ". " << RoleBuilder::GetRoleDescription(Roles::DEVELOPER) << endl;
		cout << Roles::TEST_ENGINEER << ". " << RoleBuilder::GetRoleDescription(Roles::TEST_ENGINEER) << endl;
        cout << Roles::SR_DEVELOPER << ". " << RoleBuilder::GetRoleDescription(Roles::SR_DEVELOPER) << endl;
        cout << Roles::DESIGNER << ". " << RoleBuilder::GetRoleDescription(Roles::DESIGNER) << endl;
        role = CustomConsole::ReadInt();

        //Write your code here
        Employee *emp = new Employee(empId, name, basic, hRA, allowancePercentage, role);
        employees[i] = *emp;
    }

	cout << "Enter the date of the report (dd/mm/yyyy) : " << endl;
    reportDate = CustomConsole::ReadString();

    //Write your code here
    EmployeeReport report;
    report.SetReportDate(reportDate);
    report.DisplayEmployees(SIZE, employees);


    return 0;

}