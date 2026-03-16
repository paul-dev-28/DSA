class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        if (numRows==0) 
            return v;
        v.push_back({1});
        for(int i=1;i<numRows;i++)
        {
            vector<int> currentRow;
            currentRow.push_back(1);
            for(int j=1;j<i;j++)
            {
                currentRow.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            currentRow.push_back(1);
            v.push_back(currentRow);
        }
        return v;
    }
};
