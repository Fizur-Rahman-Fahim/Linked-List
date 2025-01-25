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


//print middle elements of lists



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
    if(count%2==0)
    {
        Node* tmp=head;
        for(int i=0;i<(count/2)-1;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    else
    {
        Node* tmp =head;
        for(int i=0;i<count/2;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }

    //cout<<count<<" "<<count/2<<endl;

    
    return 0;
}