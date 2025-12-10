#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (numMap.count(complement)) {
                return {numMap.at(complement), i};
            }
            
            numMap[nums[i]] = i;
        }
        
        // This line is theoretically unreachable based on the problem constraints
        // ("Only one valid answer exists"), but it's good practice for a non-void function.
        return {};
    }
};
