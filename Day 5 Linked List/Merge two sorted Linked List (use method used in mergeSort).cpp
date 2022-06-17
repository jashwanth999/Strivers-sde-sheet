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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        
         ListNode *ans=NULL,*temp=NULL ;
         ListNode *p =list1 , *q=list2;
         
         while(p and q){
               
                
               if(p->val <= q->val) {
                   ListNode * newNode= new ListNode(p->val);
                   
                  if(!ans) ans=newNode;
                  else temp->next=newNode;
                  temp=newNode;
                  p=p->next;
                     
               }
               
               else{
                   
                  ListNode * newNode= new ListNode(q->val);
                   
                  if(!ans) ans=newNode;
                  else temp->next=newNode;
                  temp=newNode;
                  q=q->next;
               }
              
         }
         while(p){
        ListNode * newNode= new ListNode(p->val);
              if(!ans) ans=newNode;
                  else temp->next=newNode;
                  temp=newNode;
            p=p->next;
        }
        
        while(q){
        ListNode * newNode= new ListNode(q->val);
          if(!ans) ans=newNode;
          else temp->next=newNode;
            temp=newNode;
           q=q->next;
        }
       
        
        return ans;
    }
};