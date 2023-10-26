//this code is written by Abhjit Kumar... this code always print the stack in the assending order.
#include<stdio.h>
#define size 10
int stack[size];
int top=-1;

void push(int data)
{
    if(top==size-1)
    printf("stack overflow\n");
    else if(top==-1)
    {
        top++;
        stack[top]=data;
    }
    else if(top>-1 && top<size)
    {
        if(stack[top]>=data)
        {
            top++;
            stack[top]=data;
        }
        else
        {
            int a=top++;
            int b=top;
            while(stack[a]<data&&a!=-1)
            {
                stack[b]=stack[a];
                a--;b--;
                if(a==0)
                {
                stack[b]=stack[a];
                stack[a]=data;
                }
                else if(stack[a]>=data)
                stack[b]=data;
            }
        }
    }
}

int pop()
{
    int data=-999;
    if(top==-1)
    printf("stack underflow\n");
    else{
        data=stack[top];
        top--;

    }
    return data;
}

void traverse()
{
    int i;
    if(top==-1)
    printf("stack is empty\n");
    else
    {
        i=top;
        while(i!=-1)
        {
            printf("%d ",stack[i]);
            i--;
        }
    }
}
int main()
{
    int n,i;
    printf("1. insert the element\n");
    printf("2. delete the element\n");
    printf("3. print the elemts\n");
    printf("4. exit\n");
    do{
    printf("\nenter your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("enter the data\n");
        scanf("%d",&i);
        push(i);
        break;
    case 2:
        i=pop();
        printf("%d",i);
        break;
    case 3:
        traverse();
        break;
    default:
        printf("enter coreect chose\n");
        break;
    }
    }while(n!=4);
    return 0;
}

// output:
// 1. insert the element
// 2. delete the element
// 3. print the elemts  
// 4. exit

// enter your choice    
// 1
// enter the data
// 9

// enter your choice
// 1 
// enter the data
// 7

// enter your choice
// 1
// enter the data
// 4

// enter your choice
// 3
// 4 7 9 
// enter your choice

// 1
// enter the data
// 10

// enter your choice
// 3
// 4 7 9 10 
// enter your choice
// 1
// enter the data
// 2

// enter your choice
// 3
// 2 4 7 9 10 
// enter your choice
// 2
// 2
// enter your choice
// 3
// 4 7 9 10 
// enter your choice
// 1
// enter the data
// 1

// enter your choice
// 3
// 1 4 7 9 10 
// enter your choice
// 4
