
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node* left,*right;
}Node;
Node* buildTree(int pre[],int in[],int start,int end,int *preInd)
{
	if(start>end)
		return NULL;
	Node* root = (Node*)malloc(sizeof(Node));
	root->data = pre[*preInd];
	(*preInd)++;
	int inInd = 0;
	for(inInd = start ; inInd<=end;inInd++)
		if(in[inInd]==root->data)
			break;
	root->left = buildTree(pre,in,start,inInd-1,preInd);
	root->right = buildTree(pre,in,inInd+1,end,preInd);

	return root;
}

void printPostorder(Node* root)
{
	if(root==NULL)
		return ;

	//lrroot
	printPostorder(root->left);
	printPostorder(root->right);
	printf("%d ",root->data);
}

int main()
{
	printf("enter size of tree : ");
	int n;
	scanf("%d",&n);
	printf("Enter the Preorder Traversal : ");
	int pre[n];
	int i;
	for(i = 0;i<n;i++)
		scanf("%d",&pre[i]);
	printf("Enter the Inorder Traversal : ");
	int in[n] ;
	for(i=0;i<n;i++)
		scanf("%d",&in[i]);
	int preInd =  0;
	Node* root = buildTree(pre,in,0,n-1,&preInd);
	printf("\nTree created : \n");
	printf("Post order\n");
	printPostorder(root);
	printf("\n");
}



