#include <iostream>

using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Stack implementation
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push element onto the stack
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = top;
        if (top != NULL) {
            top->prev = newNode;
        }
        top = newNode;
    }

    // Pop element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        if (top != NULL) {
            top->prev = NULL;
        }
        delete temp;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Get the top element of the stack
    int getTop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }
};

// Queue implementation
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    // Enqueue element into the queue
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Dequeue element from the queue
    void dequeue() {
        if (isEmpty()) {
           
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front != NULL) {
            front->prev = NULL;
        } else {
            rear = NULL;
        }
        delete temp;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == NULL;
    }

    // Get the front element of the queue
    int getFront() {
        if (isEmpty()) {
         
            return -1;
        }
        return front->data;
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    Stack stack;
    Queue queue;

    // Reading values and pushing/enqueueing them into stack and queue
    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        stack.push(value);
    }
    for (int i = 0; i < M; i++) {
        int value;
        cin >> value;
        queue.enqueue(value);
    }

    bool isSame = true;

    // Removing elements from stack and queue and comparing them
    for (int i = 0; i < N; i++) {
        int stackValue = stack.getTop();
        int queueValue = queue.getFront();
        if (stackValue != queueValue) {
            isSame = false;
            break;
        }
        stack.pop();
        queue.dequeue();
    }

    // Checking if both stack and queue are empty
    if (!stack.isEmpty() || !queue.isEmpty()) {
        isSame = false;
    }

    if (isSame) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
