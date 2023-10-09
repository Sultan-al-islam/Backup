#include<stdio.h>

int rear= -1;
int front =-1;

int print_front (int *Q)
{
    if(front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("qeue front :%d\n",Q[front]);
    }
}
int printRear(int *Q)
{
    if (front > rear)
        printf("Queue is empty!\n");
    else
        printf("queue rear: %d\n", Q[rear]);
}

int deque (int *Q)
{
    if(front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        int val = Q[front];
        front++;
        return val;
    }

}

int enqueue(int *Q,int n, int val)
{
    if(rear>=n-1)
    {
        printf("Queue if full");
    }
    else
    {
       rear++;
        Q[rear] = val;
        if (front == -1)
            front++;

    }
}
void printAll(int *Q)
{
    int i;
    for (i=0;i<front;i++)
        printf("_ ");
    for (i=front; i<=rear; i++)
        printf("%d ", Q[i]);

    printf("\n");
}

int main()
    {

        int n;
      scanf("%d",&n);
      int Q[n];
      

int r=1;
      while(r)
      {
        int option;
         printf("What would you like to do?\n1. Enqueue\n2. Dequeue\n3. Print front\n4. Print rear\n5. Print all\n6. Exit\n");
        printf("Enter an option: ");
        scanf("%d", &option);
       
     switch(option)
     {
        case 1:
        {
            int val;
            printf("Enter valu to enqued:");
            scanf("%d",&val);
            enqueue(Q,n,val);
            break;
        }
        case 2:
        {
            int dq=deque(Q);
            printf("%d is Dequed\n",dq);
            break;
        }
         case 3:
        {
            print_front(Q);
            break;
        }
         case 4:
        {
            printRear(Q);
            break;
        }
         case 5:
        {
            printAll(Q);
            break;
        }
         case 6:
        {
            r=0;
            break;
        }
     }

      }

      return 0;
    }
