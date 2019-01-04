#include<stdio.h>
#include<math.h>

main(){
	long int n1,n2,n,i,j,k,np;
	int arr[20];
	long int m,g;
	int length;
	int digit_no;
//	int nl,nk;
	int count,requried=0;
printf("n-digit no\n");
	scanf("%d",&digit_no);
//	printf("\n%d %d",n1,n2);
m=pow(10,digit_no-1);
g=pow(10,digit_no);
//printf("%d",g);
	for(i=m;i<g;i++){
	//	printf("%d",i);
		for(j=i+1;j<g;j++){
		//	printf("hfghjdghjndghnsfg");
		count=0;
		length=2*digit_no;
		
	//	n1=i;
	//	n2=j;
		n=i*j;
		np=n;
		
		for(k=0;k<length;k++){
			arr[length-1-k]=n%10;
			n=n/10;
		
		}
		
		for(k=0;k<length/2;k++){
		
		if(arr[k]==arr[length-1-k]){
			count++;
			
		}
		else
		break;
	}
	if(count==digit_no && requried<np){
	     n1=i;
	     n2=j;
		requried=np;
		
	//	printf("%d",n);
	}
	}
}
printf("\n%d %d %d",n1,n2,requried);
}
