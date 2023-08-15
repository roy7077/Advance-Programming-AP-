bool has_cycle(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode* f=head;
    SinglyLinkedListNode* s=head;
    
    while(f and f->next)
    {
        s=s->next;
        f=f->next->next;
        
        if(s==f)
        {
            return 1;
        }
    }
    return 0;
}