class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int i=0;i<n;i++)
        {
            vector<bool> row(n+1,false);
            vector<bool> col(n+1,false);

            for(int j=0;j<n;j++)
            {
                int r=matrix[i][j];
                int c=matrix[j][i];

                if(r>n || c>n || col[c] || row[r])
                {
                    return false;
                }
                row[r]=true;
                col[c]=true;
            }
        }

        return true;
    }
};