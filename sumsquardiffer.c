#include<stdio.h>
main(){
	int i,n1=0,n2=0,m;
	for(i=1;i<=100;i++){
		m=pow(i,2);
		n1=n1+m;
	}
	for(i=1;i<=100;i++){
		n2=n2+i;
		
	}
	n2=pow(n2,2);
	printf("%d %d %d",n1,n2,n2-n1);
	

}
