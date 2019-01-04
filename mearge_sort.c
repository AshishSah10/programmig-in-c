#include<stdio.h>
#include<math.h>
#include<time.h>
main(){
int arr[100000],n,i,low=0,high;
float time;
clock_t start,end;
printf("enter number of element in array\n");
//scanf("%d",&n);
n=100000;
high=n-1;
printf("enter the elements in array\n");
for(i=0;i<99999;i++){
//	arr[i]=i;
 //  scanf("%d",&arr[i]);
arr[i]=rand();
}
start=clock();
mearge_sort(arr,low,high);
end=clock();
time=(end-start);
//for(i=0;i<n;i++)
//printf("%d ",arr[i]);
//printf("time is : %f",time);
//printf("start time: %f",start);
//printf("end time: %f",end);
}
mearge_sort(int arr[],int low,int high){
	int mid;
	if(low<high){
	
	mid=ceil((low+high)/2);
	
	
	 mearge_sort(arr,low,mid);
	 mearge_sort(arr,mid+1,high);
	 mearge(arr,low,mid,high);
}
}
mearge(int arr[],int low,int mid,int high){
int i,j,temp;
//printf("\n");
//    for(i=low;i<=high;i++)
 //   printf(" %d ",arr[i]);

i=low;
    for(j=mid+1;j<=high;j++){
    	for(i=low;i<=mid;i++){
		
	if(arr[j]<=arr[i]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       
    }
}
mid++;
}

//printf("\n");
 //   for(i=low;i<=high;i++)
  //  printf(" %d ",arr[i]);


//printf("\n\n");
}


