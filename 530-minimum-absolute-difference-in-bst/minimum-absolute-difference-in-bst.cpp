/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
void inorder(TreeNode* root,vector<int> &arr)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left,arr);
    arr.push_back(root->val);
    inorder(root->right,arr);
}

class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;

        inorder(root,arr);

        int n=arr.size();

        int small=INT_MAX;  

        for(int i=1;i<n;i++)
        {
            int dif=abs(arr[i]-arr[i-1]);
            small=min(small,dif);
        }

        return small;

    }
};