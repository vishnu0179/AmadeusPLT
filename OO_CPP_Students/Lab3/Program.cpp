#include <iostream>
#include <string>
using namespace std;

#include "CustomConsole.h"
#include "Address.h"
#include "Employee.h"

using namespace Lab3;

static void StoreData(Employee& Emp)
{
	//---------------Accept the employee information
	cout<<"Enter employee details: "<<endl;
	cout<<"EmpID:"<<endl;
	Emp.SetEmpid(CustomConsole::ReadString());
	cout<<"Employee Name: "<<endl;
	Emp.SetName( CustomConsole::ReadString() );
	cout<<"Gender(m/f): "<<endl;
	Emp.SetGender( CustomConsole::ReadChar() );

	Address address;
	cout<<"Address \n Line1: "<<endl;
	address.SetLine1(CustomConsole::ReadString());
	cout<<"Line 2: "<<endl;
	address.SetLine2(CustomConsole::ReadString());
	cout<<"City: "<<endl;
	address.SetCity(CustomConsole::ReadString());
	cout<<"Pincode: "<<endl;
	address.SetPincode(CustomConsole::ReadString());

	Emp.SetAddress(address);
}

static void ShowData(Employee& Emp)
{

	//----------------Display the employee information
	cout<<endl;
	cout<<"---EMPLOYEE DETAILS---"<<endl;
	cout<<"EmpID  : "<<Emp.GetEmpid()<<endl;
	cout<<"Name   : "<<Emp.GetName()<<endl;
	cout<<"Gender : "<<Emp.GetGender()<<endl;

	// Displaying address of the employee
	Address Adr = Emp.GetAddress();
	cout<<"Address"<<endl;
	cout<<"Line 1  : "<<Adr.GetLine1()<<endl;
	cout<<"Line 2  : "<<Adr.GetLine2()<<endl;
	cout<<"City    : "<<Adr.GetCity()<<endl;
	cout<<"Pincode : "<<Adr.GetPincode()<<endl;

}

int main(int argc, char *args[])
{
	Employee emp;

    StoreData(emp);

    ShowData(emp);
}


 