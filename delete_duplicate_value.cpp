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

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void delete_duplicate(Node* head)
{
    Node* i=head;
    Node* j;
    Node* tmp;
   
   while(i!=NULL && i->next!=NULL)
   {
    j=i;
    while(j->next!=NULL)
    {
        if(i->val==j->next->val)
        {
            tmp=j->next;
            j->next=j->next->next;
            delete tmp;
        }
       else
       {
        j=j->next;
       }
    }




    i=i->next;
   }
}

void print_link_list(Node* head)
{
    Node* tmp = head;

    
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}



int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    //print_link_list(head);
    //cout<<endl;

    delete_duplicate(head);


    print_link_list(head);

    return 0;
}