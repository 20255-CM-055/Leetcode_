class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        int org=num;

        for(int i=1;i<num;i++){
            if(num%i==0){
                sum=sum+i;
            }
        }

        if(sum==org){
            return true;
        }

        return false;
    }
};