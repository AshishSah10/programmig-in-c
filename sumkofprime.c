#include<stdio.h>
#include<math.h>
main(){
	int i,j,n,k=0;
	int flag=0,count,count1=0;
    long int sum=0;
	printf("enter value of n\n");
	scanf("%d",&n);
	for(i=5;i<=10;i++){
		flag=0;
		count=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
			break;	
			}
			else{
			count++;
		}
		}
		
		
		if(count<=(int)sqrt(i)){
		count1++;
	//	printf("%d-->%d ",k++,i);
		sum=sum+i;
	}

	}
	printf("   %ld   ",sum);
		
	}

