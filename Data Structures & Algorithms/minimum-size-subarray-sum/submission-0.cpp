class Solution {
public:
  
        int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int h=0;
        int res=INT_MAX;
        int sum=0;
        sum=sum+arr[l];
        while(h<n){
        if(sum>= target){
            int s=(h-l+1);
            
            res=min(res,s);
            l++;
            sum=sum-arr[l-1];
        }
        else{
            
            h++;
            if(h==n){
                break;
            }
               sum=sum+arr[h];
         
        }
        }
        if(res==INT_MAX){
            return 0;
        }
        else{
        return res;
        }
    }
};
   