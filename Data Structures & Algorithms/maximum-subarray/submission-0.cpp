class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int csum=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=csum+nums[i];
            int v2=nums[i];
            csum=max(v1,v2);
            ans=max(ans,csum);
        }
        
        return ans;
    }
};
