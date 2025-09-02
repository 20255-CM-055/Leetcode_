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
void toArr(ListNode* head,vector<int> &arr)
{
       ListNode* temp=head;

       while(temp!=NULL)
       {
        arr.push_back(temp->val);
        temp=temp->next;
       }
}

void swapping(vector<int> &arr,int k,int n)
{
    if(k>n)
    {
        return;
    }

    int start=k-1;
    int end=n-k;

    if(start==end)
    {
        return;
    }

    swap(arr[start],arr[end]);
}

ListNode* convert(vector<int> &arr,int n)
{
       ListNode* head=new ListNode(arr[0]);
       ListNode* temp=head;

       for(int i=1;i<n;i++)
       {
            temp->next=new ListNode(arr[i]);
            temp=temp->next;
       }

       return head;
}

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        vector<int> arr;

        toArr(head,arr);

        int n=arr.size();
        swapping(arr,k,n);

        return convert(arr,n);
    }
};