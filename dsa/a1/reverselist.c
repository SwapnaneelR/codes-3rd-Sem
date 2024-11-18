#include<stdio.h>
int main()
{
	int n;
	printf(" Enter no of elements : \n");
	scanf("%d",&n);
	int arr[n];int i;
	printf(" \n enter the elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf(" Origin List : \n");
	for( i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("Reverse List : \n");
	int s=0,e=n-1;
	while(s<=e)
	{
		int  t = arr[s];
		arr[s]=arr[e];
		arr[e]=t;
		s++;e--;
	}
	for( i=0;i<n;i++)
  		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
	
