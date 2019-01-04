#include<stdio.h>
#include<math.h>
main(){
	int a,b,c;
	int m,n,o;
	for(a=1;a<999;a++){
		for(b=2;b<999;b++){
			for(c=3;c<999;c++){
				m=pow(a,2);
				n=pow(b,2);
				o=pow(c,2);
				if((m+n==o) && (a+b+c==1000)){
					printf(" %d %d %d \n",a,b,c);
					printf(" %d %d %d \n",m,n,o);
					printf(" %d \n",a+b+c);
					printf(" %d \n",m+n);
					printf(" %u \n",a*b*c);
					exit(0);
				}
			}
		}
	}
}
