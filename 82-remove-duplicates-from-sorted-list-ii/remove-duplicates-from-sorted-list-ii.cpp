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
 ListNode* create(vector<int> &arr)
 {
    ListNode* head=new ListNode(arr[0]);
    ListNode* temp=head;

    for(int i=1;i<arr.size();i++)
    {
        temp->next=new ListNode(arr[i]);
        temp=temp->next;
    }

    return head;
 }

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        vector<int> arr;
        map<int,int> mpp;
        ListNode* temp=head;

        while(temp!=NULL)
        {
            mpp[temp->val]++;
            temp=temp->next;
        }


        for(auto it:mpp)
        {
            if(it.second==1)
            {
                arr.push_back(it.first);
            }
        }
        if(arr.empty()) return nullptr;

        return create(arr);
    }
};