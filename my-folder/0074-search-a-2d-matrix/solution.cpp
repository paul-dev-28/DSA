class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            if (!(target>=matrix[i][0] && target<=matrix[i][m-1]))
                continue;
            else
            {
                int l=0,u=m-1;
                while(l<=u)
                {
                    int mid=(l+u)/2;
                    if (target>matrix[i][mid])
                        l=mid+1;
                    else if(target<matrix[i][mid])
                        u=mid-1;
                    else 
                        return true;
                }
                return false;
            }
        }
        return false;
    }
};
