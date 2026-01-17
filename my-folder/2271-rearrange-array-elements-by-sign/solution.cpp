class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int c=0,k=0;
        for(int i : nums)
        {
            if (i>=0)
                pos.push_back(i);
            else
                neg.push_back(i);
        }
        while(c<nums.size())
        {
            nums[c]=pos[k];
            c++;
            nums[c]=neg[k];
            c++;
            k++;
        }
        return nums;
    }
};
