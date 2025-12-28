class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int cnt=0;

        for(int i=0;i<r*c;i++){
            int a=grid[i/c][i%c];

            if(a<0){
                cnt++;
            }
        }

        return cnt;
    }
};