class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int c=0;
        if (nums.size()==1)
            return nums[0];
        while(c<nums.size())
        {
            if (nums[c]!=nums[c+1])
                return nums[c];
            c+=2;
        }
        return (nums[c]);
    }
};
