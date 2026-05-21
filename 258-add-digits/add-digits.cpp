class Solution {
public:
    int addDigits(int num) {
        int sum=0;

        while(num>0){
            int d=num%10;
            sum=sum+d;
            num=num/10;

            while(sum>=10){
                int d=sum%10;
                sum=sum/10;
                sum=sum+d;
            }
        }

        return sum;
        
    }
};