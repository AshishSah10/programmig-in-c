#include<stdio.h>
void main()
{
    int choice;
    printf("\n1. linear search");
    printf("\n2. binary search");
    printf("\n3. exit");
    while(1)
    {
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            lsearch();
            break;
        case 2:
            bsearch();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\ninvalid choice");
            break;
        }
    }
}
void lsearch()
{
    int i,data,size,list[25];
    printf("\nenter size of list");
    scanf("%d",&size);
    printf("\nenter elements in list");
    for(i=0;i<size;i++)
        scanf("  %d",&list[i]);
    printf("\nenter element to be searched");
    scanf("%d",&data);
    for(i=0;i<size;i++)
    {
        if(list[i]==data)
        {
            printf("\n%d is in the list",data);
            break;
        }
    }
    if(i==size)
        printf("\n%d is not in the list",data);
}
void bsearch()
{
    int last,first,mid,data,i,list[25],size;
    printf("\nenter size of list");
    scanf("%d",&size);
    printf("\nenter elements in list in ascending order");
    for(i=0;i<size;i++)
        scanf("  %d",&list[i]);
    printf("\nenter the element to be searched");
    scanf("%d",&data);
    first=0;
    last=size-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(data>list[mid])
        {
            first=mid+1;
            mid=(first+last)/2;
        }
        else if(data<list[mid])
        {
            last=mid-1;
            mid=(first+last)/2;
        }
        if(data==list[mid])
        {
            printf("\n%d is in the list in index no. %d",data,mid);
            break;
        }
    }
    if(first>last)
        printf("\n%d is not in the list",data);
}
