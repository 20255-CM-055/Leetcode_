bool zero(int num)
{
    while(num>0)
    {
        if(num%10==0)
        {
            return true;
        }
        num=num/10;
    }

    return false;
}
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        
        for(int i=1;i<n;i++)
        {
            int j=n-i;
            if(!zero(i) && !zero(j))
            {
                return {i,j};
            }
        }

        return {-1,-1};
    }
};