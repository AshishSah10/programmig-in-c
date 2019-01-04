#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fpointer;
    fpointer=fopen("ashish.txt","w+");
    fseek(fpointer,15,SEEK_SET);
    fputs("kumar sah",fpointer);
    fseek(fpointer,1,SEEK_END);
    fputs("progamming",fpointer);
    fclose(fpointer);
    return 0;
}

