#include<stdio.h>
void trainseatinfo(int);
void main(){
int i,T,N[108];
printf("enter no. of enquries you want to make\n");
scanf("%d",&T);
printf("enter %d seat no",T);
for(i=0;i<T;i++)
    scanf("%d",&N[i]);
    for(i=0;i<T;i++)
    {
        trainseatinfo(N[i]);
    }
}
void trainseatinfo(int a){
    int i;
int AWS[18],AMS[18];
int AAS[18],BWS[18];
int BMS[18],BAS[18];
  AWS[0]=6;AMS[0]=5;AAS[0]=4;BWS[0]=1;BMS[0]=2;BAS[0]=3;
for(i=0;i<18;){
    BWS[i+1]=BWS[i]+11;
     BWS[i+2]=BWS[i+1]+1;
  /*  i=i+2;
}
for(i=0;i<18;){*/
    BMS[i+1]=BMS[i]+9;
     BMS[i+2]=BMS[i+1]+3;
  /*   i=i+2;
}
for(i=0;i<18;){*/
    BAS[i+1]=BAS[i]+7;
    BAS[i+2]=BAS[i+1]+5;
   /*  i=i+2;
}
for(i=0;i<18;){*/
    AWS[i+1]=AWS[i]+1;
     AWS[i+2]=AWS[i+1]+11;
/*i=i+2;
}
for(i=0;i<18;){*/
    AMS[i+1]=AMS[i]+3;
     AMS[i+2]=AMS[i+1]+9;
   /*  i=i+2;
}
for(i=0;i<18;){*/
    AAS[i+1]=AAS[i]+5;
     AAS[i+2]=AAS[i+1]+7;
     i=i+2;
     }
     for(i=0;i<18;i++)
        printf("%d ",AAS[i]);
        for(i=0;i<18;i++)
        printf("%d ",AMS[i]);
        for(i=0;i<18;i++)
        printf("%d ",AWS[i]);
        for(i=0;i<18;i++)
        printf("%d ",BAS[i]);
        for(i=0;i<18;i++)
        printf("%d ",BWS[i]);
        for(i=0;i<18;i++)
        printf("%d ",BMS[i]);
for(i=0;i<18;i++){
if(BAS[i]==a){
    printf("BAS  %d",i);
    if(i%2==0)
        printf("\n%d",BAS[i+1]);
        else
          printf("\n%d",BAS[i-1]);
        }


 if(BMS[i]==a){
    printf("BMS  %d",i);
    if(i%2==0)
        printf("\n%d",BMS[i+1]);
        else
          printf("\n%d",BMS[i-1]);
        }


 if(BWS[i]==a){
    printf("BWS  %d",i);
    if(i%2==0)
        printf("\n%d",BWS[i+1]);
        else
          printf("\n%d",BWS[i-1]);
        }


 if(AMS[i]==a){
    printf("AMS  %d",i);
    if(i%2==0)
        printf("\n%d",AMS[i+1]);
        else
          printf("\n%d",AMS[i-1]);
        }


if(AWS[i]==a){
    printf("AWS  %d",i);
    if(i%2==0)
        printf("\n%d",AWS[i+1]);
        else
          printf("\n%d",AWS[i-1]);
        }


if(AAS[i]==a){
    printf("AAS  %d",i);
    if(i%2==0)
        printf("\n%d",AAS[i+1]);
        else
          printf("\n%d",AAS[i-1]);
        }

}
}
