class Solution {
public:
 

int longestConsecutive(vector<int>& nums) {

	unordered_map<int, int>f;
	for (int i = 0;i < nums.size();i++)
	{
		f[nums[i]] = 1;
	}
	int ans = 0;
	for (int i = 0;i < nums.size();i++)
	{
		if (!f.count(nums[i]-1))
		{
			int x = nums[i];
			int c = 1;
			while (true)
			{
				x += 1;
				if (!f.count(x))
				{
					ans = max(ans, c);
					break;
				}
				c++;
			}
		}
	}
	return ans;

}

};
