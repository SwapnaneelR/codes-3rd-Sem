#include<stdio.h>
#include<stdlib.h>
typedef struct Node{ 
	int data;
	struct Node* left;
	struct Node* right;
}Node;
Node* newNode(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->left = NULL;
	node->right = NULL;
	node->data = data;
	return node;
}
	void inorder(Node *root){

	//left - root - right
	if(!root)
		return;
	inorder(root->left);
	printf("%d -> ",root->data);
	inorder(root->right);
} 
void preorder(Node *root){

	//root - left  - right
	if(!root)
		return;
	printf("%d -> ",root->data);
	preorder(root->left);
	preorder(root->right);
} 
void postorder(Node *root){

	//left - root - right
	if(!root)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d -> ",root->data);

}

Node*  insert(Node* root,int data)
{
	if(root==NULL)
		return newNode(data);
	int choice ;
	printf(" enter 1 for left and 2 for right ");
	scanf("%d",&choice);

	if(choice == 1)

	{
		
		root->left = insert(root->left,data);
		}
	else if(choice ==2)
	{
		
	root->right = insert(root->right,data);
	
	}
	else
	printf("invalid " );
	return root;
}
int main()
{
	Node *root=NULL;
	       //	= (Node*)malloc(sizeof(Node));
	int x;
	while(1)
	{
		int ch;
		printf(" enter 1 for insertion 2 for inorder 3 for postorder 4 for preorder 5 to exit : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			int x;
			printf("enter the size of the tree \n");
			int size;
			scanf("%d",&size);
			for(int i=1;i<=size;i++)
			{
			printf("enter value of data of %d : ",i);
                        scanf("%d",&x);
			root =  insert(root,x);

			}
		}
		else if(ch==2)
		{inorder(root);
			printf("NULL \n");
		}
		else if(ch==3)
		{	postorder(root);
			printf("NULL \n");
		}
		else if(ch==4)
		{	preorder(root);
			printf("NULL \n" );
		}
		else
			break;
	}
}





