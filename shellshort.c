#include<stdio.h>
#include<math.h>
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
int i,j,temp,gap;
gap=ceil(n/2);
for(gap=ceil(n/2);gap>0;gap=gap/2){
for(i=gap;i<n;i++){
	temp=arr[i];
for(j=i;j>=gap;j=j-gap){
    if(arr[j-gap]>temp)
        arr[j]=arr[j-gap];
    }
        arr[j]=temp;
    

}
}
}

