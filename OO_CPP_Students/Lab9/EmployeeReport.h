#pragma once

namespace Lab9
{
	class EmployeeReport
	{
		string _reportDate;
		/// <summary>
		/// Property of the class
		/// </summary>
	public:
		// Implement getters and setters
		string GetReportDate();
		void SetReportDate(string reportDate);

			/// <summary>
			/// Method to print a line in a report
			/// </summary>
	private:
		void PrintLine();

		/// <summary>
		/// Method to display header information of the report
		/// </summary>
		void DisplayHeader();

		/// <summary>
		/// Method to display footer information in the report
		/// </summary>
		/// <param name="Count"></param>
		void DisplayFooter(int Count);

		/// <summary>
		/// Method to display employees information
		/// </summary>
		/// <param name="Employees"></param>
	public:
		void DisplayEmployees(int count, Employee *employees);
	};
}
