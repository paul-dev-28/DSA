class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int  k=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++)
            {
                if (nums[j]==0)
                    continue;
                else
                {
                    swap(nums[i],nums[j]);
                    k=j;
                    break;
                }
                    
                i=k;
            }
        }
        
    }
};
