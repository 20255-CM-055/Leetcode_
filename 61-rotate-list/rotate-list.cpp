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

  ListNode* create(vector<int> &arr,ListNode* head){
    int n=arr.size();
    head=new ListNode(arr[0]);
    ListNode* temp=head;

    for(int i=1;i<n;i++){
        temp->next=new ListNode(arr[i]);
        temp=temp->next;
    }

    return head;
 }

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
          ListNode* temp=head;
        vector<int> arr;

        if(head==NULL || head->next==NULL){
            return head;
        }

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        int n=arr.size();
        k=k%n;

        std::rotate(arr.begin(),arr.end()-k,arr.end());

        return create(arr,head);

        
    }
};