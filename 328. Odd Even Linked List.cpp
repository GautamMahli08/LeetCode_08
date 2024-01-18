------------------ LEETCODE -------------------------

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        return NULL;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = even;

        while(even!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=temp;
        return head;
   }
};

------------------------------- CPP ------------------------------

#include <iostream>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        return NULL;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = even;

        while(even!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=temp;
        return head;
}


    void printlist(ListNode *head)
{
   // Node *curr=head;
    while(head!=NULL)
    {
        cout<<(head->val)<<" ";
        head=head->next;
    }
}
int main()
{

     ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
  oddEvenList(head);
    //cout<<"\n";
    printlist(head);

    return 0;
}
  
