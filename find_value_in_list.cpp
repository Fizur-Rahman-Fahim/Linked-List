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

int find_value(Node* head,int find,int index)
{
    index++;
    if(head==NULL)
    {
        return -1;
    }
    if(head->val==find)
    {
        return index;
    }
    return find_value(head->next,find,index);

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
    int t;
    cin>>t;
    Node* head=NULL;
    Node* tail=NULL;
    while(t--)
    {
        
        int val;
        int find;
        
        while(true)
        {
            cin>>val;
            if(val==-1)
            {
                break;
            }
            insert_at_tail(head,tail,val);
        }
        cin>>find;
        //print_link_list(head);
        int count=0;
        count=find_value(head,find,count);
        if(count!=-1)
        {
            cout<<count-1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

        head=NULL;
       
    }

    return 0;
}