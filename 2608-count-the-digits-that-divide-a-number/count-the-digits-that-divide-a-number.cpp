class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int org=num;

        while(num>0){
            int d=num%10;
            num=num/10;

            if(org%d==0){
                cnt++;
            }
        }

        return cnt;
    }
};