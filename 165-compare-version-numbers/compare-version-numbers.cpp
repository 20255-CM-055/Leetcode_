class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        stringstream ss2(version2);
        vector<int> arr1,arr2;
        string part1,part2;
        string part;
        // int ans=10;

        while(getline(ss1,part,'.'))
        {
            arr1.push_back(stoi(part));
        }

        while(getline(ss2,part,'.'))
        {
            arr2.push_back(stoi(part));
        }

        int n=max(arr1.size(),arr2.size());

        for(int i=0;i<n;i++)
        {
            int v1=((i<arr1.size())?arr1[i]:0);
            int v2=((i<arr2.size())?arr2[i]:0);

            if(v1<v2)
            {
                return -1;
            }

            if(v1>v2)
            {
                return 1;
            }
        }

        return 0;
    }
};