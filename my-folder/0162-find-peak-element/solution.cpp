class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if (n==1)
            return 0;
        else if(nums[0]>nums[1])
            return 0;
        else if(nums[n-1]>nums[n-2])
            return (n-1);
        int c=1,k=0;
        while(c<(n-1))
        {
            if (nums[c]>nums[c-1] && nums[c]>nums[c+1])
                k=1;
            c++;
            if(k==1){
                return c-1;
                break;}
        }
        return c-1;
    }
};
