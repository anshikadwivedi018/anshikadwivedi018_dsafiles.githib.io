class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        start=head
        while(start!=None):
            while(start.next!=None and start.val==start.next.val):
                start.next=start.next.next
            start=start.next
        return head
