#include<stdio.h>

void delete(int arr[],int size,int index1)
{ 
	index1--;
	int i;
	for(i=index1;i<size-1;i++)
		arr[i]=arr[i+1];

}
int main()
{
	int arr[10];int i;
	printf("Enter 10 elements : \n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);

	delete(arr,10,6);
	delete(arr,10,3);
	printf(" The resultant array : \n");
	for(i=0;i<8;i++)
		printf("%d ",arr[i]);
	printf("\n The fifth element = %d \n",arr[4]);
	return 0;
}

