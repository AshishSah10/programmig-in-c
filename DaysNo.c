#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  int h;
  printf("enter hours");
  scanf("%d",&h);
  i=h/12;
  printf("%d hours is %d days",h,i);
  getch();
}
