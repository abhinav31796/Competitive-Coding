/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    ListNode* temp=A; 
    ListNode* prev=NULL;
    ListNode* next1;
    while(temp!=NULL)
    {   next1=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next1;
        
    }
    
    A=prev;
    return A;
    
}
