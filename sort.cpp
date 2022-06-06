#include <iostream>
#include <vector>

void swap(std::vector<int>& nums, int i, int j)
{
	if ( nums[i] == nums[j] ) return;
	nums[i] ^= nums[j];
	nums[j] ^= nums[i];
	nums[i] ^= nums[j];
}

int main()
{
	return 0;
}
