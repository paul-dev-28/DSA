class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,max=0,max_element=nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if (nums[j]==nums[i])
                {
                    c++;
                    nums.erase(nums.begin()+j);
                    j--;
                }
                if(j==nums.size()-1)
                {
                    c++;
                    if (c>max)
                    {
                        max=c;
                        max_element=nums[i];
                    }
                }
            }
            c++;
            if (c>max)
            {
                max=c;
                max_element=nums[i];
            }
            c=0;
        }
        return max_element;
    }
};
