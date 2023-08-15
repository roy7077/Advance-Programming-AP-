#include <bits/stdc++.h>
using namespace std;

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

//take input
DoublyLinkedListNode* input(int n)
{
    DoublyLinkedListNode* head=nullptr;
    DoublyLinkedListNode* tail=nullptr;
    
    while(n--)
    {
        int input;
        cin>>input;
        
        DoublyLinkedListNode* newnode=new DoublyLinkedListNode(input);
        if(!head)
        {
            head=newnode;
            tail=newnode;
        }
        else 
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    
    return head;
}

//print list
void print(DoublyLinkedListNode* head)
{
    DoublyLinkedListNode* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    
    //base case
    if(llist->next==NULL)
    {
        llist->prev=NULL;
        return llist;
    }
    
    //recursive calls
    //small calculation
    
    DoublyLinkedListNode* temp=reverse(llist->next);
    llist->next->next=llist;
    llist->prev=llist->next;
    llist->next=NULL;
    return temp;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        DoublyLinkedListNode* head=input(n);
        DoublyLinkedListNode* head1=reverse(head);
        print(head1);
    }
    return 0;
}
