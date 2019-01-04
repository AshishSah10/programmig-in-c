/*#include<stdio.h>
#include<conio.h>
void main(){
    int n,a[100],i,j;
printf("enter the number less than which you want prime number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
    a[i]=i+1;
for(i=6;i<n;i++){
    for(j=2;j<=i/2;j++)
    {if(a[i]%j==0)
        break;
    else
        printf("%d  ",a[i]);}

}
getch();
}  */
// Sample code to perform I/O:
#include <stdio.h>
void nprimeno(int);
int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);// Writing output to STDOUT
    nprimeno(num);
     getch();
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
void nprimeno(int a){
    int i,j,s[1000],flag;
    for(i=2;i<a;i++){
    s[i]=i;
    scanf("%d",&s[i]);
    }

    for(i=2;i<=a;i++){
        flag=0;
        for(j=2;j<=i/2;j++)
        {

            if(s[i]%j==0){
                flag=1;

            break;
            }

        }
           if(flag!=1)
            printf("%d ",s[i]);
        }

    }


