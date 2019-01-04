#include<stdio.h>
#include<conio.h>
/*  void main(){
int i,n,fact=1;
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*i;
}
printf("factorial of %d is %d",n,fact);
getch();
}   */
int fact(int a);
void main(){
int n,s;
printf("enter a number\n");
scanf("%d",&n);
s=fact(n);
printf("factorial of %d is %d",n,s);
getch();
}
int fact(int a){
    int factorial;
if(a==1)
  return 1;
else{
    factorial=a*fact(a-1);
    return factorial;
}
}
