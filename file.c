/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL, *temp, *newNode;

int count=0, choice=1;
int main()
{
    

int data;
    do{
        newNode= (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the data :");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL)
        {
            head=temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
        printf("press 0 to end & 1 to continu:");
        scanf("%d",&choice);
        
    }
    while(choice==1);
    
    temp=head;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }

    return 0;
}
