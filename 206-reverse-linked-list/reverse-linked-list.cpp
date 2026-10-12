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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* temp=head;
        vector<int> arr;

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        reverse(arr.begin(),arr.end());
        int n=arr.size();

        ListNode* nl=new ListNode(arr[0]);
    ListNode* t=nl;

        for(int i=1;i<n;i++){
            t->next=new ListNode(arr[i]);
            t=t->next;
        }

        return nl;

        
    }
};