class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
                sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
           // int sum=-nums[i];
            while(l<r){
                 int sum=-nums[i];
                int s=nums[l]+nums[r];
                if(s==sum){
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                
                    while(l<r && nums[l]==nums[l-1]){
                        l++;
                    }
                    while(l<r && nums[r]==nums[r+1]){
                        r--;
                    }
                }
                else if(s<sum){
                    l++;
                }
                else r--;
            }
        }
        return res;
    }
};
