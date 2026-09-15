
        class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //unordered_map<int, int> numMap;
        int n = nums.size();
     unordered_map<int, int> prevMap;

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if (prevMap.count(diff) ) {
                return {prevMap[diff], i};
            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};
     
   
