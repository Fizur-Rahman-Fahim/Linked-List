
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

void insert_at_any_position(Node* head,int v,int p)
{
    Node* newnode= new Node(v);
    Node* tmp=head;
    for(int i=1;i<p-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid position"<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<"Inserted at "<<p<<endl;
    
    //cout<<"Your linked list is: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}


void print_link_list(Node* head)
{
    Node* tmp = head;

    cout<<endl;
    //cout<<"Your linked list is: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    //cout<<endl<<endl;
}

int main()
{
    int value;
    Node* head=NULL;
    while(true)
    {
        cin>>value;
        if (value==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,value);
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int p,v;
        cin>>p>>v;
        insert_at_any_position(head,v,p);
        
    }



    
    
    return 0;
}