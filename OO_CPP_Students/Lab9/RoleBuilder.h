#pragma once

namespace Lab9
{
	class RoleBuilder
	{


		/// <summary>
		/// Method to get role description for a given role id
		/// </summary>
		/// <param name="RoleId"></param>
		/// <returns>Description of a role id</returns>
	public:
		static string GetRoleDescription(int RoleId);
	};
}
