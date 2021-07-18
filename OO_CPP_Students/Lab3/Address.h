#pragma once

namespace Lab3
{
	class Address
	{

		string _line1;
		string _line2;
		string _city;
		string _pincode;

		/// <summary>
		/// Properties of the class
		/// </summary>

	public:
		string GetLine1();
		void SetLine1(string line);
		string GetLine2();
		void SetLine2(string line);
		string GetCity();
		void SetCity(string city);
		string GetPincode();
		void SetPincode(string pincode);

	};
}
