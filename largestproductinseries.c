#include<stdio.h>
main(){
	int n[1000];
	int i,k,j;
	int n1[4],product=1,preproduct=0;
//	char a;
		for(i=0;i<1000;i++){
		n[i]=getc(stdin);
	}
	printf("     %c      %c      %c ",n[i],n[i-1],n[i-2]);
	printf(".....................,,,,,,,,,,,,,,,,");
	for(i=0;i<1000;i++){
		for(j=i;j<i+4;j++){
		product=product*n[j];
		if(preproduct<=product){
			for(k=j;k<j;k--)
			n1[k]=n[i];
			preproduct=product;
		}
		}
	}
	for(k=0;k<4;k++)
	printf("%c ",n[k]);
	printf(" %c ",preproduct);
}
