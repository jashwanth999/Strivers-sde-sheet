/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        ListNode p=l1;
        ListNode q=l2;
        int c=0;
        ListNode ans=null;
        ListNode cur=null;
        while(p!=null || q!=null){
            int val= (p!=null ? p.val:0) +  (q!=null ?q.val:0)+c;
             c= val>=10?1:0;
            val=val%10;
            ListNode temp=new ListNode(val);
            if(ans==null) ans=temp;
            else cur.next=temp;
            cur=temp;
            if(p!=null) p=p.next;
            if(q!=null) q=q.next;
        }
       if(c>0) cur.next=new ListNode(1);
        return ans;
        
    }
}