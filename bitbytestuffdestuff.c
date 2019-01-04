#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main(){
	int choice;
	while(1){
	printf("1. Bit stuffing\n2. Byte stuffing\n3. exit\n");
	scanf("%d",&choice);
 switch(choice){
	case 1:
		bit_stuffing();
		break;
	case 2:
		byte_stuffing();
		break;
	case 3:
		exit(0);
		break;
	default:
		printf("Invalid choice\n");
		break;
	}
}
}
void bit_stuffing(){
	int i,j,n;
	int a[50];
	int temp,temp1;
	printf("enter size of framework (Example: 8):\n");
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
		printf("\n");
		printf("data after destuffing:          ");
		i=0;
		  while(i<n){
		   if(a[i]==1 && a[i+1]==1 && a[i+2]==1 && a[i+3]==1 && a[i+4]==1){
		    i=i+5;
		    for(j=i;j<n;j++){
			a[j]=a[j+1];
	    	}
			n=n-1;
		   }
		   i++;
		  }
		  for(i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");
		                                                                      
	}
	
byte_stuffing(){
	FILE *f1,*f2;
	char ch;
	char a[100];
	int i;
	f1=fopen("byte.txt","w");
	if(f1==NULL){
	printf("error in opening file\n");
	exit(0);
   }
   printf("Enter data to send ,press '}' to end :\n");
   while(1){
   	scanf("%c",&ch);
   	fputc(ch,f1);
   	if(ch=='}'){
	fclose(f1);
   	break;
   }
   }
   f1=fopen("byte.txt","r+");
	if(f1==NULL){
	printf("error in opening file\n");
	exit(0);
   }
   for(i=0;a[i]!='}';i++)
   a[i]=fgetc(f1);
   fclose(f1);

    printf("sending stuffed data: ");
   f2=fopen("bytesend.txt","w");
   fputs(" DLE STX ",f2);
    for(i=0;a[i]!='}';i++){
    	if(a[i]=='D' && a[i+1]=='L' && a[i+2]=='E'){
		fputs("DLE",f2);
			
    }
    fputc(a[i],f2);
	}
	fputs(" DLE ETX ",f2);
}


