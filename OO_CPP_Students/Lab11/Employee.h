#pragma once

namespace Lab11
{
	class Employee
	{
		string _empid;
		string _name;
		double _basic;
		double _hra;
		double _allowancePercentage;
		int _role;

		/// <summary>
		/// Properties of the class
		/// </summary>

	public:
		//Implement the constructor and Getters and Setters
		string GetEmpId();
		void SetEmpId(string empid);

		string GetName();
		void SetName(string name);

		double GetBasic();
		void SetBasic(double basic);

		double GetHRA();
		void SetHRA(double hra);

		double GetAllowancePercentage();
		void SetAllowancePercentage(double allowancePercentage);

		int GetRole();
		void SetRole(int role);

		Employee();
		Employee(string empid, string name, double basic, double hra, double allowedPercentage, int role);

		/// <summary>
		/// Method to get the salary of an employee
		/// </summary>
		/// <returns></returns>
		double GetSalary();

		/// <summary>
		/// Method to get the allowance of an employee
		/// </summary>
		/// <returns></returns>
		double GetAllowance();

		/// <summary>
		/// Method to get the role description for a given role id
		/// </summary>
		/// <returns></returns>
		string GetRoleDescription();
	};
}
