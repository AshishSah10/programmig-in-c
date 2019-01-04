#include<stdio.h>
#include<math.h>

main(){
	long int n1,n2,i,j,k;
	int arr[20];
	long int m,g;
	int length;
	int digit_no;
	long int count,requried=0,np,n;
printf("n-digit no\n");
	scanf("%d",&digit_no);
m=pow(10,digit_no-1);
g=pow(10,digit_no);
	for(i=g-1;i>m;i--){
		for(j=i;j>m;j--){
		count=0;
		length=2*digit_no;
		n=i*j;
		np=n;
		if(requried>np)
		break;
		for(k=0;k<length;k++){
			arr[length-1-k]=n%10;
			n=n/10;
	//	printf("%d %d",m,g);

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
	}
	}
}
printf("\n%d %d %d",n1,n2,requried);
}
