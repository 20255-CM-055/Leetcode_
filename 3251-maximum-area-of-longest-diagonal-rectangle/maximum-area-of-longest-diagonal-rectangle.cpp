class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int r=dimensions.size();
        int c=dimensions[0].size();
        int maxD=INT_MIN;
        int maxA=0;

        for(int i=0;i<r;i++)
        {
            int l=dimensions[i][0];
            int w=dimensions[i][1];

            int diag=l*l+w*w;
            int area=l*w;

            if(diag>maxD || (diag==maxD && area>maxA))
            {
                maxD=diag;
                maxA=area;
            }
        }

        return maxA;
    }
};