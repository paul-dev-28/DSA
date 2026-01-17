class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(short int i=0;i<nums.size()-1;i++)
        {
            for(short int j=0;j<nums.size()-i-1;j++)
            {
                if (nums[j+1]<nums[j])
                    swap(nums[j],nums[j+1]);
            }
        }
        
    }
};
