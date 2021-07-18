#pragma once

namespace Lab7
{
	class Result
	{
		int _marks1;
		int _marks2;
		int _marks3;

		/// <summary>
		/// Properties of the fields of this class
		/// </summary>
	public:
		// Implement the getters and setters
		int GetMarks1();
		void SetMarks1(int marks1);

		int GetMarks2();
		void SetMarks2(int marks2);
		
		int GetMarks3();
		void SetMarks3(int marks3);

		/// <summary>
		/// Method to display marks obtained
		/// </summary>
		void DisplayMarks();

		/// <summary>
		/// Method to get the total of the marks in subjects
		/// </summary>
		/// <returns></returns>
		int GetTotal();

		/// <summary>
		/// Method to calculate the average of the marks
		/// </summary>
		/// <returns></returns>
		double GetAverage();

		/// <summary>
		/// Method to get the result for the marks given
		/// </summary>
		/// <returns></returns>
		string GetResult();
	};
}
