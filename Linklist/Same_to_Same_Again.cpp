#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
    int top()
    {
        
        if(empty())
        {
            return 0;
        }
        return tail->val;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
  
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
      int front()
    {
        if(empty())
        {
            return 0;
        }
        
        return head->val;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    myStack s;
    myQueue q;

    for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        s.push(value);
    }
    for (int i = 0; i < M; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }
    int flag = 1;

    for (int i = 0; i < N; i++)
    {
        int stackValue = s.top();
        int queueValue = q.front();
        if (stackValue != queueValue)
        {
            flag = 0;
            break;
        }
        s.pop();
        q.pop();
    }

    if (!s.empty() || !q.empty())
    {
        flag = 0;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}