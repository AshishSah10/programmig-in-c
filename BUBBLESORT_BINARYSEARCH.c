#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[30],int,int,int);
 void bubble_sort(int arr[30],int);
main(){
	int choice,arr[30],n,i,x,y=-1;
	int first,last;
	printf("1. binary search\n");
	printf("2. bubble sort\n");
	printf("3. exit\n");
	while(1){
	
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("enter no. of elements in array\n");
			scanf("%d",&n);
			for(i=0;i<n;i++){
			printf("%d element of array is : ",i);
		     scanf("%d",&arr[i]);
	        }
	        bubble_sort(arr,n);
	        for(i=0;i<n;i++)
	        printf("%d ",arr[i]);
	   
	        printf("enter no. you want to search\n");
	        scanf("%d",&x);
			first=0;
			last=n;
			y=binary_search(arr,first,last,x);
		
			if(y<0)
			printf("%d is not found in Array",x);
			else
			printf("%d is in the %d index of Array\n",x,y);
			break;
			
			case 2:
				printf("enter no. of elements in array\n");
			scanf("%d",&n);
			for(i=0;i<n;i++){
			printf("%dth element of array is : ",i);
		     scanf("%d",&arr[i]);
	        }
	        bubble_sort(arr,n);
				for(i=0;i<n;i++)
			printf(" %d ",arr[i]);
			break;
			case 3:
				exit(0);
				break;
		default:
		printf("\ninvalid choice\n");		
	}
}
}
 int binary_search(int arr[30],int first,int last,int x){
	int mid;
	mid=(first+last)/2;
	if(first<last){
	if(arr[mid]==x)
	return mid;
	else if(x<arr[mid]){
		binary_search(arr,first,mid-1,x);
	}
	else if(x>arr[mid]){
		binary_search(arr,mid+1,last,x);
	}
}
return -1;
}
void bubble_sort(int arr[30],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>=arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
