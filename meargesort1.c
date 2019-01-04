#include<stdio.h>
void merge_sort(int [],int,int);
void merge(int [],int,int,int);
void main(){
	int arr[100],i,low,high,n;
	printf("enter size of array:\n");
	scanf("%d",&n);
	low=0;
	high=n-1;
	printf("enter the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	merge_sort(arr,low,high);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
void merge_sort(int arr[100],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
void merge(int arr[100],int low,int mid,int high){
	int n1=mid-low+1;
	int n2=high-mid;
	int R[n1],L[n2];
	int i,j,k;
	for(i=0;i<n1;i++)
	L[i]=arr[low+i];
     for(j=0;j<n2;j++)
     	R[j]=arr[mid+1+j];
	 i=0;
	 j=0;
	 k=low;
	 while(i<n1 && j<n2){
	 	if(L[i]<=R[j]){
	 		arr[k]=L[i];
	 		i++;
		 }
		 else{
		 	arr[k]=R[j];
		 	j++;
		 }
		 k++;
	 }
	 while(i<n1){
	 	arr[k]=L[i];
	 	i++;
	 	k++;
	 }
	 while(j<n2){
	 	arr[k]=R[j];
	 	j++;
	 	k++;
	 }
	
}
