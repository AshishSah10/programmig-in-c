#include<stdio.h>
struct Node
{
    int info;
    struct Node *next;
};
struct Node *front=NULL,*rear=NULL;
void main()
{
int choice;
printf("\n1. insertion in queue");
printf("\n2. deletion in queue");
printf("\n3. display queue");
printf("\n4. exit");
    while(1)
{
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        inQueue();
        break;
    case 2:
       deQueue();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\ninvalid choice");
        break;
    }
}
getch();
}
void inQueue()
{
   struct Node *newnode;
   newnode=(struct Node*)malloc(sizeof(struct Node));
   newnode->next=NULL;
   printf("\nenter a data in queue");
   scanf("%d",&newnode->info);
   if(rear==NULL)
   {
       front=newnode;
       rear=newnode;
   }
    else
   {
    rear->next=newnode;
    rear=newnode;
   }
}
void deQueue()
{
    struct Node *temp;
   if(front==NULL)
        printf("\nqueue is empty");
   else
   {
       temp=front;
       front=front->next;
       printf("\ndeleted element is %d",temp->info);
       free(temp);
   }
}
void display()
{
    struct Node *temp=front;
    printf("\n");
    while(temp!=rear)
    {
        printf("  %d",temp->info);
        temp=temp->next;
    }
    printf("  %d",temp->info);
}
