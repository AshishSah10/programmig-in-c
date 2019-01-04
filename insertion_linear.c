#include<stdio.h>
#include<stdlib.h>
//int binary_search(int arr[30],int,int,int);
 //void bubble_sort(int arr[30],int);
main(){
	int choice,arr[30],n,i,x,y=-1;
	int first,last;
	printf("1. linear search\n");
	printf("2. insertion sort\n");
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
	        insertion_sort(arr,n);
	        for(i=0;i<n;i++)
	        printf("%d ",arr[i]);
	   
	        printf("enter no. you want to search\n");
	        scanf("%d",&x);
			y=linear_search(arr,n,x);
			if(y<0)
			printf("no is not found in Array\n");
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
	        insertion_sort(arr,n);
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
 int linear_search(int arr[30],int n,int x){
	int i;
for(i=0;i<n;i++){
	if(arr[i]==x)
	return i;
	else
	return -1;
}
}

 void insertion_sort(int arr[30],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(arr[j]>=arr[i]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}
