#include<stdio.h>
int data[100];
void main()
{
    int i,size;
    printf("\nenter the size of array");
    scanf("%d",&size);
    printf("\nenter elements in array");
    for(i=0;i<size;i++)
        scanf("%d",&data[i]);
    Quickshort(0,size-1);
    printf("\nelements in shorted order is:");
    for(i=0;i<size;i++)
        printf("  %d",data[i]);
    getch();
}
 void Quickshort(int first,int last)
 {
     int mid;
     if(first!=last)
     {
         if(firt<last)
         {
             mid=QuickPartition(first,last);
             if(mid-1>first)
                Quickshort(first,mid-1);
             if(mid+1<last)
                Quickshort(mid+1,last);
         }
         return;
     }
 }
 int QuickPartition(int first,int last)
 {
     int midvalue,i,j,temp;
     midvalue=data[first];
     i=first+1;
     j=last;
     while(i<=j)
     {
         while((i<last)&&(data[i]<=midvalue))
            i++;
         while((j>=first)&&(data[j]>midvalue))
            j--;
         if(i<j)
         {
             temp=i;
             i=j;
             j=temp;
         }
         else
            i++;
     }
     if(j!=first)
     {
         temp=j;
         j=first;
         first=temp;
     }
     return(j);
 }
