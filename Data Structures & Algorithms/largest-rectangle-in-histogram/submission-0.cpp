class Solution {
public:
 

int largestRectangleArea(vector<int>& heights) {
	stack<pair<int, int>>f;
	int area = 0;
	for (int i = 0;i < heights.size();i++)
	{
		if (f.empty()||heights[i]>=f.top().second)
			f.push({ i,heights[i] });
		else
		{
			int c = i;
			while(!f.empty() && f.top().second > heights[i])
			{
				area = max(area, (i - f.top().first) * f.top().second);
				c = f.top().first;
				f.pop();
				

			}
			f.push({ c,heights[i] });
		}

	}
	while (!f.empty()) {
		area = max(area, ((int)heights.size() - f.top().first) * f.top().second);
		f.pop();
	}

	return area;
}

};
