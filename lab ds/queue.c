#include <stdio.h>
int front = -1;
int rear = -1;

int printFront(int queue[])
{
    if (front > rear)
        printf("Could not print front as the queue is empty!\n");
    else
        printf("queue front: %d\n", queue[front]);
}

int printRear(int queue[])
{
    if (front > rear)
        printf("Could not print rear as the queue is empty!\n");
    else
        printf("queue rear: %d\n", queue[rear]);
}

int dequeue(int queue[])
{
    if (front > rear)
        printf("Could not dequeue as the queue is empty!\n");
    else
    {
        int value = queue[front];
        front++;
        return value;
    }
}

int enqueue(int queue[], int size, int value)
{
    if (rear >= size -1)
        printf("Could not enqueue as queue is full!\n");
    else
    {
        rear++;
        queue[rear] = value;
        if (front == -1)
            front++;
    }
}

void printAll(int queue[])
{
    int i;
    for (i=0;i<front;i++)
        printf("_ ");
    for (i=front; i<=rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main()
{
    int running = 1, option, size;
    printf("Enter size of queue: ");
    scanf("%d", &size);
    int queue[size];

    while(running==1)
    {
        printf("What would you like to do?\n1. Enqueue\n2. Dequeue\n3. Print front\n4. Print rear\n5. Print all\n6. Exit\n");
        printf("Enter an option: ");
        scanf("%d", &option);
       
        switch(option)
        {
        case 1:
        {
            int value;
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(queue, size, value);
            break;
        }
        case 2:
        {
            int dequeued = dequeue(queue);
            printf("Value in dequeued: %d\n", dequeued);
            break;
        }
        case 3:
        {
            printFront(queue);
            break;
        }
        case 4:
        {
            printRear(queue);
            break;
        }
        case 5:
        {
            printAll(queue);
            break;
        }
        case 6:
        {
            running = 0;
            break;
        }
        }
    }
}
