#include<stdio.h>
main(){
int arr[100000],n,i;
printf("enter number of element in array\n");
//scanf("%d",&n);
n=100000;
printf("enter the elements in array\n");
for(i=0;i<99999;i++){
arr[i]=rand();
   // scanf("%d",&arr[i]);
  //  arr[i]=i;
}
quick_sort(arr,0,n-1);
//for(i=0;i<n;i++)
//						printf("%d ",arr[i]);
}
quick_sort(int arr[],int low,int high){
	
	int pi;
	if(low<high){
	
	pi=partition(arr,low,high);
	quick_sort(arr,low,pi-1);
	quick_sort(arr,pi+1,high);
}
}
int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int j,i=low-1;
	int temp;
	for(j=low;j<high;j++){
	if(arr[j]<=pivot){
		i++;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;		
	}
}
temp=arr[i+1];
	arr[i+1]=pivot;
arr[high]=temp;

	return (i+1);
}
