#include<stdio.h>
main(){
	int i,j,n,k=0;
	int flag=0,count,count1=0;
	printf("enter value of n\n");
	scanf("%d",&n);
	for(i=5; ;i++){
		flag=0;
		count=0;
		for(j=2;j<i/2;j++){
			
			if(i%j==0){
			
			break;	
			}
			else{
		//	printf("%d",i);
			count++;
		}
		}
		if(count==(int)(i/2)-2){
		count1++;
		printf("%d-->%d ",k++,i);
	}
		if(count1==n)
		break;
	}
}
