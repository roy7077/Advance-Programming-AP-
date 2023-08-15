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

//insert a data
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    //base case
    if(!llist)
    {
        DoublyLinkedListNode* newnode=new DoublyLinkedListNode(data);
        return newnode;
    }
    
    //recursive calls 
    //small calculation
    if(llist->data>data)
    {
        DoublyLinkedListNode* newnode=new DoublyLinkedListNode(data);
        newnode->prev=llist->prev;
        newnode->next=llist;
        llist->prev=newnode;
        return newnode;
    }
    
    DoublyLinkedListNode* temp=sortedInsert(llist->next,data);
    llist->next=temp;
    return llist;
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
        
        int data;
        cin>>data;
        DoublyLinkedListNode* head1=sortedInsert(head,data);
        print(head1);
    }
    return 0;
}