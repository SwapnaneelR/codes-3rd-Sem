#include <stdio.h>

int main()

{

	int m,n;
	printf("enter no of rows : " );
	scanf("%d",&m);
	printf("enter no of columns : ");
	scanf("%d",&n);
	int arr[m][n];
	int i , j;
	printf("enter the elements : \n");
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
		//	printf("\n");
	}

	printf("2 D MATRIX : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}


	int one_dim_arr[m * n];



	// Convert 2D array to 1D array

	for (i = 0; i < m; i++)

	{

		for ( j = 0; j < n; j++)

		{

			one_dim_arr[i * n + j] = arr[i][j];

		}

	}
	// Print the 1D array

	printf("One-dimensional array:\n");

	for ( i = 0; i < m * n; i++)

	{

		printf("%d ", one_dim_arr[i]);

	}

	printf("\n");



	return 0;
}
