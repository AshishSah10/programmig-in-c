#include<stdio.h>
main(){
	int i,j,n;
	int a[50];
	int temp,temp1;
	printf("enter size of framework\n");
	scanf("%d",&n);
	printf("enter the bits in 0 and 1 form: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
while(i<n){
	
       if(a[i]==1 && a[i+1]==1 && a[i+2]==1 && a[i+3]==1 && a[i+4]==1 && a[i+5]==1){
      
       	n=n+1;
	       	i=i+5;
	       	temp=a[i];
	       	a[i]=0;
	       	for(j=i+1;j<=n;j++){
	       	temp1=a[j];
	       	a[j]=temp;
			   temp=temp1;
			   	
	       }
	       
	       	}
	       	i++;
	       	
	
		}
		printf("bits after bitstuffing:         ");
		for(i=0;i<n;i++)
		printf("%d ",a[i]);
	}

