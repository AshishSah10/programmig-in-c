#include<stdio.h>
void main()
{
    int dice,i;
    for(i=0; i<=30; i++)
    {
     dice=(rand()%6)+1;
    printf("%d\n",dice);
    }
}
