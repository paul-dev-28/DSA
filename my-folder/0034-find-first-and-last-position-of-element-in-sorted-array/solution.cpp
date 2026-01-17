class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a,b;
        int n=nums.size();

        if(n==0){
            return {-1,-1};
        }
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                a=i;
                break;
            }
            else if(i==n-1){
                return {-1,-1};
            }

        }
        for(int i=n-1;i>=0;i--){
            if(target==nums[i]){
                b=i;
                break;
            }
        }
    return {a,b};
    }
};
