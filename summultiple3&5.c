#include<stdio.h>
main(){
long long int n;
long long int i,j;
scanf("%llu",&n);
for(i=3;i<=n/2;i++){
	for(j=2;j<=i;j++){
	if(i%j==0)
	break;
	else{
	if(n%j!=0)
	printf("%llu ",j);
}
}
	
	
}


}


