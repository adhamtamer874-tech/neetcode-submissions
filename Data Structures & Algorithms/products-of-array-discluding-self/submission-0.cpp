class Solution {
public:
    
vector<int> productExceptSelf(vector<int>& nums) {

	vector<int> a(nums.size()), b(nums.size()),ans;

	a[0] = nums[0];
	b[nums.size() - 1] = nums[nums.size() - 1];

	for (int i = 1;i < nums.size();i++)
	{
		a[i] = nums[i] * a[i - 1];
	}
	for (int i = nums.size() - 2;i >= 0;i--)
	{
		b[i] = nums[i] * b[i + 1];
	}


	for (int i = 0;i < nums.size();i++)
	{
		
		if (i == 0)
		{
			ans.push_back(b[i + 1]);
		}
		else if (i == nums.size() - 1)
		{
			ans.push_back(a[i-1]);
		}
		else
		{
			ans.push_back(b[i+1]*a[i-1]);
		}




	}


	return ans;






}

};
