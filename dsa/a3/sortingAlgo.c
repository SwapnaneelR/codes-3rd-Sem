#include <stdio.h>
#include <stdlib.h>
int i, j; // loop variables

void print(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
void merge(int arr[], int left, int mid, int right)
{
	int k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int leftArr[n1], rightArr[n2];
	for (i = 0; i < n1; i++)
		leftArr[i] = arr[left + i];
	for (j = 0; j < n2; j++)
		rightArr[j] = arr[mid + j + 1];
	i = 0, j = 0, k = left;
	while (i < n1 && j < n2)
	{
		if (leftArr[i] < rightArr[j])
			arr[k++] = leftArr[i++];
		else
			arr[k++] = rightArr[j++];
	}
	while (i < n1)
		arr[k++] = leftArr[i++];
	while (j < n2)
		arr[k++] = rightArr[j++];
}
int partition(int arr[], int low, int high)
{
	int p = arr[low];
	int i = low;
	int j = high;
	while (i < j)
	{
		while (arr[i] <= p && i <= high - 1)
			i++;
		while (arr[i] > p && j >= low + 1)
			j--;
		if (i < j)
			swap(&arr[low], &arr[j]);
	}
	swap(&arr[low], &arr[j]);
	return j;
}
void InsertionSort(int arr[], int n)
{
	for (i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		print(arr, n);
	}
	print(arr, n);
}
void SelectionSort(int arr[], int n)
{
	int mini;
	for (i = 0; i < n - 1; i++)
	{
		mini = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[mini])
				mini = j;
		if (mini != i)
			swap(&arr[mini], &arr[i]);
		print(arr, n);
	}
	print(arr, n);
}
void BubbleSort(int arr[], int n)
{
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		print(arr, n);
	}
	print(arr, n);
}
void MS(int arr[], int l, int r)
{
	if (l < r)
	{
		int mid = l + (r - l) / 2;
		MS(arr, l, mid);
		MS(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}
}
void QS(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		QS(arr, low, pi - 1);
		QS(arr, pi + 1, high);
	}
}
void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--)
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

int main(void)
{
	while (1)
	{
		int ch;
		printf(" Enter 1 for Insertion 2 for Selection 3 for Bubble 4 for Merge 5 for Quick 6 for Heap and 0 to exit \n");
		scanf("%d", &ch);
		if (!ch)
			exit(1);

		printf("Enter the size of the Array : ");
		int n;
		scanf("%d", &n);
		printf("Enter the elements of the Array : ");
		int i;
		int arr[n];
		for (i = 0; i < n; i++)
			scanf("%d", &arr[i]);

		switch (ch)
		{
		case 1:
			InsertionSort(arr, n);
			break;
		case 2:
			SelectionSort(arr, n);
			break;
		case 3:
			BubbleSort(arr, n);
			break;
		case 4:
			MS(arr, 0, n - 1);
			print(arr, n);

			break;

		case 5:
			QS(arr, 0, n - 1);
			print(arr, n);
			break;
		case 6:
			heapSort(arr, n);
			print(arr, n);
			break;
		default:
			exit(1);
		}
	}
}
