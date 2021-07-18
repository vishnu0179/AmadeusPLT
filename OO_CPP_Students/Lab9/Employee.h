#pragma once

namespace Lab9
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

	};
}
