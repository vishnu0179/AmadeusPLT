#pragma once

namespace Lab11
{
	class SalaryCalculator
	{
		/// <summary>
		/// Method to calculate the salary of an employee
		/// </summary>
		/// <param name="emp"></param>
		/// <returns></returns>
	public:
		static double GetSalary(Employee& emp);

		/// <summary>
		/// Method to get the allowance for an employee based on the percentage
		/// </summary>
		/// <param name="emp"></param>
		/// <returns></returns>
		static double GetAllowance(Employee& emp);
	};
}
