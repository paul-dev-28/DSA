class Solution {
public:
    int singleNumber(vector<int>& nums) {
        short int c=0;
        int k=0;
        for(short int i=0;i<nums.size();i++)
        {
            c=0;
            for(short int j=i+1;j<nums.size();j++)
            {
                if (nums[j]==nums[i])
                {
                    nums.erase(nums.begin()+j);
                    c++;
                    break;
                }
            }
            if (c!=1)
                 k=nums[i];
            
        }
        return k;
    }
};
