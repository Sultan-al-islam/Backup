#include<bits/stdc++.h>
using  namespace std;

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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int size(Node* head)
{
    Node* temp=head;
    int cnt =0;
    while(temp!=NULL)
    {
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

int main()
{
   Node *head= NULL;
    Node *tail= NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);       
    }

    for(Node* i=head; i->next!= NULL; i=i->next)
    {
        for(Node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
        }
    }

    int s= size(head);
    Node* tmp = head;
    int mid = (s+1)/2;

    for(int i=0; i<mid-1; i++)
    {
        tmp= tmp->next;
    }
    if(s%2==1)
    {
        cout<< tmp->val<< endl;
    }
    else
    {
        cout<< tmp->val<< " "<< tmp->next->val<< endl;
    }

    return 0;
}