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

 ListNode* create(vector<int> &arr){
    ListNode* head=new ListNode(arr[0]);
    ListNode* temp=head;
    int n=arr.size();

    for(int i=1;i<n;i++){
        temp->next=new ListNode(arr[i]);
        temp=temp->next;
    }

    return head;
 }
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;

        if(head==NULL || head->next==NULL){
            return NULL;
        }

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        int n=arr.size();
        int mid=n/2;

        arr.erase(arr.begin()+mid);

        return create(arr);



    }
};