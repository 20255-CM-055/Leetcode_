class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_map<int,int> mpp;
       int l=0;
       int maxi=0;
       int n=fruits.size();

       for(int r=0;r<n;r++)
       {
            mpp[fruits[r]]++;

            while(mpp.size()>2)
            {
                mpp[fruits[l]]--;

                if(mpp[fruits[l]]==0)
                {
                    mpp.erase(fruits[l]);
                }
                l++;
            }

            maxi=max(maxi,r-l+1);
       }

       return maxi;
    }
};