/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
           set<ListNode*>s;
         
           ListNode* ptr = head;

          
           while(ptr){
                if(s.find(ptr)!=s.end()) return 1;
                s.insert(ptr);
                ptr=ptr->next;
           }
         
          return 0;
    }
};