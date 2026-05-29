class Solution {
public:
    int minElement(vector<int>& nums) {
       
        vector<int> temp;
        int val=INT_MAX;

        for(int n:nums){
             int sum=0;
            while(n>0){
                int d=n%10;
                sum=sum+d;
                n=n/10;
            }
            temp.push_back(sum);
        }

        for(int a:temp){
            val=min(a,val);
        }

        return val;
    }
};