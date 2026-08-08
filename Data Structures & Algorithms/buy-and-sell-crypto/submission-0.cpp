class Solution {
public:
   
int maxProfit(vector<int>&prices)
{
	int ans = 0;

	
	int mi = prices[0];

	for (int r = 1;r < prices.size();r++)
	{
		if ((prices[r] -mi)>0)
		{
			ans = max(ans, prices[r] - mi);
		}
		mi = min(mi, prices[r]);

	}


	return ans;
}

};
