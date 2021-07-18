#pragma once

namespace Lab4
{
	class Cache
	{
		static int MAX_CAPACITY;

		/// <summary>
		/// Static method to get the maximum capacity of the cache
		/// </summary>
		/// <returns></returns>
	public:
		static int GetMaxCapacity();
		static void SetMaxCapacity();
	};
}