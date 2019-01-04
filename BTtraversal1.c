#include<stdio.h>
struct BTNode
{
    int info;
    struct BTNode *left,*right;
};
struct BTNode *root=NULL;
int count=0;
struct BTNode* insert(struct BTNode*,int);
void main()
{
    int choice,value;
    printf("\n1. create binary tree");
    printf("\n2. preoder traversal");
    printf("\n3. inorder traversal");
    printf("\n4. postorder traversal");
    printf("\n5. exit");
    while(1)
    {
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
          printf("\nEnter the value to be insert: ");
		 scanf("%d", &value);
		 root = insert(root,value);
		 break;
        case 2:
            preOrder(root);
            break;
        case 3:
           inOrder(root);
          break;
        case 4:
            postOrder(root);
            break;
        case 5:
            exit(0);
             break;
        default:
            printf("\n invalid choice");
        }
    }
}
struct BTNode* insert(struct BTNode *root,int value)
{
   struct BTNode *newnode;
   newnode = (struct BTNode*)malloc(sizeof(struct BTNode));
   newnode->info = value;
   if(root == NULL)
    {
      newnode->left = newnode->right = NULL;
      root = newnode;
      count++;
   }
   else
    {
      if(count%2 != 0)
	 root->left = insert(root->left,value);
      else
	 root->right = insert(root->right,value);
   }
   return root;
}
void preOrder(struct BTNode *root)
{
    if(root)
    {
        printf("  %d",root->info);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(struct BTNode *root)
{
    if(root)
    {
    inOrder(root->left);
    printf("  %d",root->info);
    inOrder(root->right);
    }
}
void postOrder(struct BTNode *root)
{
    if(root)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("  %d",root->info);
    }
}
