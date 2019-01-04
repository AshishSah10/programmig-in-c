#include<stdio.h>
void main()
{
  int list[20],size,i;
printf("\nEnter size of the list: ");
  scanf("%d",&size);
printf("\nEnter %d integer values: ",size);
  for(i = 0; i < size; i++)
    scanf("%d",&list[i]);
quickSort(list,0,size-1);
  printf("\nList after sorting is: ");
  for(i = 0; i < size; i++)
    printf(" %d",list[i]);
getch();
}
void quickSort(int list[20],int first,int last)
{
    int pivot,i,j,temp;
if(first < last)
    {
         pivot = first;
         i = first;
         j = last;

         while(i < j)
            {
             while(list[i] <= list[pivot] && i < last)
                 i++;
             while(list[j] > list[pivot])
                 j--;
             if(i < j){
                  temp = list[i];
                  list[i] = list[j];
                  list[j] = temp;
             }
         }

         temp = list[pivot];
         list[pivot] = list[j];
         list[j] = temp;
         quickSort(list,first,j-1);
         quickSort(list,j+1,last);

    }
}
