/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int length(ListNode* head)
 {
     int len=0;
     while(head!=NULL)
     {
         len++; head=head->next;
     }
     return len;
 }
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    int m=length(A); int n=length(B);
    int d=n-m;
    if(m>n){
        ListNode* temp=A; A=B; B=temp;
        d=m-n;
    }
    for(int i=0;i<d;i++)
    {
        B=B->next;
        }
   while(A!=NULL && B!=NULL)
   { if(A==B)
   {
       return A;
   }
   A=A->next; B=B->next;
   
       
   }
    
   return NULL;
    
}
