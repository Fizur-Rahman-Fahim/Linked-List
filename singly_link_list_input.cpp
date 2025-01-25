#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;  
    Node(int val)
    {
        this->val=val;
        this->next=NULL;

    }
};
void insert_at_tail(Node* &head,int v)
{
    Node* newnode= new Node(v);
    if(head==NULL)
    {
        head = newnode;
        return;
    }

    Node* tmp=head;

    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next=newnode;
}






int main()
{
    Node* head=NULL;
    int val,count=0;

    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,val);
        }
        count++;
    }

    cout<<count;

    
    return 0;
}