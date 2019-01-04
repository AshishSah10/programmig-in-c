#include<stdio.h>
#include<conio.h>
struct node{
	int id_num;
	int st_val;
	struct node *link0;
	struct node *link1;
};
struct node *ptr,*start,*q;
int vst_arr[100],a[10];
void main(){
	int i,j,posi,count;
	char n[10];
	printf("enter the number of states in the machine\n");
	scanf("%d",&count);
	q=(struct node*)malloc(sizeof(struct node)*count);
	for(i=0;i<count;i++){
	(q+i)->id_num=i;
	
	printf("state machine %d:\n",i);
	printf("next state if input is 0: \n");
	scanf("%d",&posi);
	(q+i)->link0=q+posi;
	
	printf("next state if input is 1: \n");
	scanf("%d",&posi);
	(q+i)->link1=q+posi;
	
	printf("is the state is final state(0/1)\n");
	scanf("%d",&(q+i)->st_val);
	}
	printf("enter the initial state of the machine\n");
	scanf("%d",&posi);
	start=q+posi;
	
	while(1){
	printf("perform string check(0/1)\n");
	scanf("%d",&j);
	if(j){
		ptr=start;
		printf("enter the string\n");
		scanf("%s",n);
		for(posi=0;n[posi]!='\0';posi++)
		a[posi]=(n[posi]-'0');
	
	printf("the visited state in the m/c are:\n");
	for(i=0;i<posi;i++){
		vst_arr[i]=ptr->id_num;
		if(a[i]==0)
		ptr=ptr->link0;
		else if(a[i]==1)
		ptr=ptr->link1;
		else{
			printf("incorrect input\n");
			return;
		}
		printf("[%d]",vst_arr[i]);
}
      printf("\n");
      printf("Present State:%d\n",ptr->id_num);
      printf("String Status:: ");
      if(ptr->st_val==1)
    printf("String Accepted\n");
      else
    printf("String Not Accepted\n");
    
}
    else
      return 0;
  }
    printf("........................................................\n");
  return 0;
}
	
	
