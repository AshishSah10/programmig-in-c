#include<stdio.h>
#include<conio.h>
void main()
{
int size, i, j, temp, list[30];
printf("\nEnter the size of the list: ");
scanf("%d", &size);
printf("\nEnter %d integer values: ", size);
for (i = 0; i < size; i++)
     scanf("%d", &list[i]);
       for (i = 1; i < size; i++)
           {
             temp = list[i];
             j = i - 1;
             while ((temp < list[j]) && (j >= 0))
            {
                list[j + 1] = list[j];
                j = j - 1;
            }
        list[j + 1] = temp;
        }
        printf("\nList after Sorting is:\n");
        for (i = 0; i < size; i++)
        printf(" %d", list[i]);
        getch();
        }

