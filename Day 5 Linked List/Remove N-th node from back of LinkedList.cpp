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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        
        ListNode* ptr=head;
        
        while(ptr){
            
            ptr=ptr->next;
            
            len++;
        }
        
      
        int k = len-n;
       
        if(!k) return head->next;
    
        
        ptr=head;
        
        ListNode* prev=NULL;
    
        while(k--){
            
            prev=ptr;
            
            ptr=ptr->next;
        }

        prev->next=ptr->next;
        
        return head;
    }
};