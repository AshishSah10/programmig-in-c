#include<stdio.h>
main(){
int arr[100],n,i;
printf("enter number of element in array\n");
scanf("%d",&n);
printf("enter the elements in array\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
bubblesort(arr,n);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
void bubblesort(int arr[100],int n){
	int i,j,temp;
	for(i=0;i<=n-1;i++){
	for(j=0;j<=n-i-1;j++){
	   if(arr[j]>arr[j+1]){
           temp=arr[j];
          arr[j]=arr[j+1];
           arr[j+1]=temp;
         
		       }	
	}
	      printf(" l%dl ",arr[n-1]);
}
}



