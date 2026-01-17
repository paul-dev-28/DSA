class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,u=nums.size()-1,mid=0;
        while(l<=u)
        {
            mid=(u+l)/2;
            if (target<nums[mid]){
                    u=mid-1;
                    
            }
                
            if(target>nums[mid]){
                l=mid+1;
                
            }
            if(target==nums[mid])
                return mid;
            
        }
        
        return l;
    }
};
