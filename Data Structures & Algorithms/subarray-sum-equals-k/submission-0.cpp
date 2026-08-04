class Solution {
public:
    

int subarraySum(vector<int>& nums, int k) {

	for (int i = 1;i < nums.size();i++)
	{
		nums[i] += nums[i - 1];
	}
	unordered_map<int, int>f;
	f[0] = 1;
	int ans = 0;
	for (int i = 0;i < nums.size();i++)
	{

		int a = nums[i]-k;

		if (f.contains(a))
		{
			ans+=f[a];
		}

		f[nums[i]]++;

	}
	return ans;

}

    
};