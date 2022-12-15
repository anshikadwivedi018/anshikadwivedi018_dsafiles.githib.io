class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        temp=ListNode(0)
        start=temp
        start1=list1
        start2=list2
        while(start1!=None and start2!=None):
            if(start1.val<start2.val):
                start.next = start1
                start1=start1.next
                start=start.next
            else:
                start.next = start2
                start2=start2.next
                start=start.next
        while(start1!=None):
            start.next = start1
            start=start.next
            start1=start1.next
        while(start2!=None):
            start.next = start2
            start=start.next
            start2=start2.next
        return temp.next
            
        
