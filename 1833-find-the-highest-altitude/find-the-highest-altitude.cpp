class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> arr;
        arr.push_back(0);
        int sum=0;

        for(int i=0;i<n;i++){
            sum=sum+gain[i];
            arr.push_back(sum);
        }

        int ans=INT_MIN;
        for(int a:arr){
            ans=max(ans,a);
        }

        return ans;
    }
};