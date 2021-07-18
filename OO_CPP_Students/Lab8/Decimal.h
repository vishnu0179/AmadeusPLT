#pragma once

namespace Lab8
{
	class Decimal
	{
		/// <summary>
		/// Method to get the whole number from a double
		/// </summary>
		/// <param name="Number"></param>
		/// <returns></returns>
	public:
		static int GetWhole(double Number);

		/// <summary>
		/// Method to get the fractional part of a double number
		/// </summary>
		/// <param name="Number"></param>
		/// <returns></returns>
		static double GetFraction(double Number);

		/// <summary>
		/// Method to check if a given number is odd or even
		/// </summary>
		/// <param name="Number"></param>
		/// <returns></returns>
		static bool IsOdd(double Number);
	};
}
