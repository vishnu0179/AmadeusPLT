#pragma once

namespace Lab6
{
	class SwapData
	{
		int _num1;
		int _num2;
		/// <summary>
		/// Properties of the class
		/// </summary>
	public:
		//Implement the getters and setters
		int GetNum1();
		void SetNum1(int num);

		int GetNum2();
		void SetNum2(int num);
		/// <summary>
		/// Method to swap values
		/// </summary>
		void SwapValues();

		/// <summary>
		/// Method to display values before and after swapping
		/// </summary>
		/// <param name="str"></param>
		void DisplayValues(string str);
	};
}
