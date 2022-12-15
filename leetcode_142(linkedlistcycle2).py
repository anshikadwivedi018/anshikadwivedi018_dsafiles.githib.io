class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
       h , t = head , head
       while h and h.next :
            h = h.next.next
            t =t.next
            
            if h == t :
                break ;
       if not h or not h.next :
            return None
       t = head  
       while h != t :
            h = h.next
            t = t.next
       return t
