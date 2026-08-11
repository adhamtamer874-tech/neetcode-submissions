class Solution {
public:
   


vector<int> maxSlidingWindow(vector<int>& nums, int k) {


	vector<int>ans;
	deque<int>f;

	int l = 0;

	for (int r = 0;r < nums.size();r++)
	{
		while (!f.empty() && nums[f.back()] <= nums[r])
			f.pop_back();


		f.push_back(r);

		if (r - l+1 == k)
		{
			ans.push_back(nums[f.front()]);
			if(f.front() == l)
			{
				f.pop_front();
			}
			l++;
		}	
	}
	return ans;
}

};
