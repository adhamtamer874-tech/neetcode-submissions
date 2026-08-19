class Solution {
public:
    
int carFleet(int target, vector<int>& position, vector<int>& speed) {

	vector<pair<int, int>>f(speed.size());

	for (int i = 0;i < speed.size();i++)
	{
		f[i] = { position[i],speed[i] };
	}
	sort(f.begin(), f.end());
	stack<pair<int, int>>d;
	for (int i = f.size()-1;i>=0;i--)
	{
		if(!d.empty())
		{
			double t1 = double(target - d.top().first) / d.top().second;
			double t2 = double(target - f[i].first) / f[i].second;
			
			if (t2 <= t1)
				continue;
		}
		d.push(f[i]);
	}
	return d.size();
}

};
