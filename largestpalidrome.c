#include<stdio.h>

main(){
	int n1,n2,n,i,j,k,np;
	int arr[6];
	int length;
//	int nl,nk;
	int count,requried=0;
//	printf("n-digit no\n");
//	scanf("%d",&digit_no);
//	printf("\n%d %d",n1,n2);
	for(i=100;i<=999;i++){
		for(j=101;j<=999;j++){
		count=0;
		length=6;
	//	n1=i;
	//	n2=j;
		n=i*j;
		np=n;
		for(k=0;k<6;k++){
			arr[5-k]=n%10;
			n=n/10;
		}
		
		for(k=0;k<length/2;k++){
		
		if(arr[k]==arr[5-k]){
			count++;
		
		}
		else
		break;
	}
	if(count==3 && requried<np){
	     n1=i;
	     n2=j;
		requried=np;
	//	printf("%d",n);
	}
	}
}
printf("\n%d %d %d",n1,n2,requried);
}
