#include <stdio.h>
int top = -1;

int peek(int stack[])
{
    if (top == -1)
        printf("Could not peek as the stack is empty!\n");
    else
        printf("Stack top: %d\n", stack[top]);
}

int pop(int stack[])
{
    if (top == -1)
        printf("Could not pop as the stack is empty!\n");
    else
        {
            int value = stack[top];
            top--;
            return value;
        }
}

int push(int stack[], int size, int value)
{
    if (top > size)
        printf("Could not push as stack is full!\n");
    else
    {
        top++;
        stack[top] = value;
    }
}

void printAll(int stack[])
{
    int i;
    for (i=top;i>=0;i--)
        printf("%d\n", stack[i]);
}

int main()
{
    int  r,option, size;
    printf("Enter size of stack: ");
    scanf("%d", &size);
    int stack[size];

  
 
    while(r=1)
    {
        printf("What would you like to do?\n1. Peek\n2. Pop\n3. Push\n4. Print all\n5. Exit\n");
        printf("Enter an option: ");
        scanf("%d", &option);
        
        switch(option)
        {
        case 1:
        {
            peek(stack);
            break;
        }
        case 2:
        {
            int popped = pop(stack);
            printf("Value in popped: %d\n", popped);
            break;
        }
        case 3:
        {
            int value;
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(stack, size, value);
            break;
        }
        case 4:
        {
            printAll(stack);
            break;
        }
        case 5:
        {
            r=0;
           
            break;
        }
        }
    }
}




