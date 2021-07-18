#pragma once

namespace Lab3
{
	/// <summary>
	/// Class to represent employee information
	/// </summary>
	class Employee
	{
		string _empid;
		string _name;
		char _gender;
		Address _address;

		/// <summary>
		/// Properties of the class
		/// </summary>
	public:
		string GetEmpid();
		void SetEmpid(string empid);
		string GetName();
		void SetName(string name);
		char GetGender();
		void SetGender(char gender);
		Address GetAddress();
		void SetAddress(Address &address);
	};
}
