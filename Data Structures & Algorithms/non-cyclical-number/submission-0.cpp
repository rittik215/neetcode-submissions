class Solution {
public:
long long fun(int n){
        long long sum=0;
        while(n>0){
            int d=n%10;
             n=n/10;
            sum=sum+d*d;
        }
        return sum;
    }
    bool isHappy(int n) {
         int fast=n;
        int slow=n;
        while(fast!=1){
            slow=fun(slow);
            fast=fun(fast);
            fast=fun(fast);
            if(slow==fast && slow!=1){
                return false;
            }
        }
       
        return true;
        
    }
};
