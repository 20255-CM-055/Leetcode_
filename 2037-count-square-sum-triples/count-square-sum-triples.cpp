class Solution {
public:
    int countTriples(int n) {
        int cnt=0;

        for(int i=2;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=(i*i)+(j*j);
                int r=sqrt(temp);

                if((r*r==temp) && r<=n){
                    cnt+=2;
                }
            }
        }

        return cnt;
    }
};