#include<stdio.h>
main(){
int arr[100],n,i;
printf("enter number of element in array\n");
scanf("%d",&n);
printf("enter the elements in array\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
insertionsort(arr,n);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
void insertionsort(int arr[100],int n){
int i,j,temp;
for(i=1;i<n;i++)
for(j=0;j<=i;j++){
    if(arr[j]>arr[i]){
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
}
}
