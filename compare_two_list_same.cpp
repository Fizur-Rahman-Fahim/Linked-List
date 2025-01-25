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
void insert_at_tail1(Node* &head1,Node* &tail1,int val)
{
    Node* newnode1 = new Node(val);
    if(head1==NULL)
    {
        head1=newnode1;
        tail1=newnode1;
        return;
    }
    tail1->next=newnode1;
    tail1=newnode1;
}


bool compare_node(Node* head,Node* head1)
{

    while (head != NULL && head1 != NULL)
    {
        if (head->val != head1->val)
        
            return false;

        head = head->next;
        head1 = head1->next;
        
    }
    return (head == NULL && head1 == NULL);









    /*int flag;
    while(head!=NULL && head1!=NULL)
    {
        if(head->val!=head1->val)
        {
            return false;
        }
        

        head =head->next;
        head1 =head1->next;
    }


    return (head==NULL && head1==NULL);*/
}







int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }


    Node* head1=NULL;
    Node* tail1=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail1(head1,tail1,val);
    }

    if(compare_node(head,head1))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

        
    return 0;
}