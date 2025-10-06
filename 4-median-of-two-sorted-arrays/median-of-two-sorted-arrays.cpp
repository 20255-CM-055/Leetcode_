class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        // int n1=nums1.size();
        int n2=nums2.size();

        for(int i=0;i<n2;i++)
        {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(),nums1.end());

        int len=nums1.size();
        int mid=len/2;

        if(len%2!=0)
        {
            ans=nums1[mid];
        }
        else if(len%2==0)
        {
            ans=(nums1[mid]+nums1[mid-1])/2.0;
        }

        return ans;

    }
};