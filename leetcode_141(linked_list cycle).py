bool hasCycle(struct ListNode *head) {
    struct ListNode* slow;
    struct ListNode* fast;
    slow=head;
    fast=head;
    if(head==NULL)
    return 0;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL )
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
          return 1;
    }
    return 0;
}
