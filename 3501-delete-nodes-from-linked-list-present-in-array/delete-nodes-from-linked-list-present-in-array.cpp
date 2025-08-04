/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* convert(vector<int> &ans)
{
    ListNode* head=new ListNode(ans[0]);
    ListNode* temp=head;

    for(int i=1;i<ans.size();i++)
    {
        temp->next=new ListNode(ans[i]);
        temp=temp->next;
    }

    return head;
}
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       unordered_set<int>  st(nums.begin(),nums.end());;
       ListNode* temp=head;
       vector<int> ans;

       while(temp!=NULL)
       {
            if(st.find(temp->val)==st.end())
            {
                ans.push_back(temp->val);
            }
            temp=temp->next;
       }

       return convert(ans);
    }
};