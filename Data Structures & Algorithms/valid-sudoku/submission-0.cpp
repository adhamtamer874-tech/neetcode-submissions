class Solution {
public:
    

bool isValidSudoku(vector<vector<char>>& board) {

	vector<vector<int>>r(9, vector<int>(10, 0)),c(9, vector<int>(10, 0)),b(9, vector<int>(10, 0));



	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			
			int a = j / 3;
			int s = i / 3;
			int q = (a * 3) + s;

			int val = board[i][j] - '0';
			// Then use: r[j][val]

			if (board[i][j]!='.'&&(r[j][val] || c[i][val] || b[q][val]))
			{
				return false;
			}
			if (board[i][j] != '.') {
				r[j][val] = 1;

				c[i][val] = 1;

				b[q][val] = 1;
			}

		}
	}

	return true;

}

};
