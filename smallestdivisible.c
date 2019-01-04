#include<stdio.h>
main(){
	int first,last;
	int i,j,count,diff;
	printf("enter the first and last no.\n");
	scanf("%d %d",&first,&last);
	diff=last;
	for(i=2*last;;i++){
		count=0;
		for(j=last;j>=first;j--){
		if(i%j==0 ){
		count++;
		continue;
	}
		else
		break;
	}
	if(count==diff){
	printf("%d",i);
	break;
	}
}
}
