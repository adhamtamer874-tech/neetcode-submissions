class Solution {
public:
    

vector<int> twoSum(vector<int>& nums, int target) {

	unordered_map<int, int>f;
	for (int i=0;i<nums.size();i++)
	{
		int a = target - nums[i];
		if (f.count(a))
		{
			return { f[a],i };
		}
		f[nums[i]] = i;
	}

	return {};

}

};
