#include<stdio.h>
main(){
int arr[100],n,i;
printf("enter number of element in array\n");
scanf("%d",&n);
printf("enter the elements in array\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
heap_sort(arr,n);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
heap_sort(int arr[],int n){
	int at_index,i,j,temp;
	if(n%2==0)
  at_index=((n-1)-2)/2;
  else
  at_index=((n-1)-1)/2;
	for(i=at_index;i>=0;i--)
	heapfy(arr,i);
         temp=arr[0];
		arr[0]=arr[n-1];
		arr[n-1]=temp;
	for(i=n-1;i>=0;i--){
	    heap_sort(arr,i);
//	heapfy(arr,i);
}

}
heapfy(int arr[],int at_index){
	int child1=(2^at_index)+1,child2=child1+1,temp;
	int i;
//	if(arr[child2]=='\0')
//	arr[child2]=0;
	if(arr[child1]<=arr[child2]){
		temp=arr[child1];
		arr[child1]=arr[child2];
		arr[child2]=temp;
	}
	if(arr[at_index]<=arr[child1]) {
		temp=arr[child1];
		arr[child1]=arr[at_index];
		arr[at_index]=temp;
	}
	if(arr[child1]<arr[(2^child1)+1]){
			temp=arr[child1];
		arr[child1]=arr[(2^child1)+1];
		arr[(2^child1)+1]=temp;
	}
	if(arr[child2]<arr[(2^child2)+1]){
			temp=arr[child2];
		arr[child2]=arr[(2^child2+1)];
		arr[(2^child2)+1]=temp;
	}
	
}
