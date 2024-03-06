#include<stdio.h>
void selection_sort(int *a, int n)
{
	int i,j,min,swap;
	for(i=0;i<n-1;i++)
	{
		min = i ;
		for(j=i+1;j<n;j++)
		{
			if (a[j]<a[min])
			{
				min=j;
			}
		}
		swap = a[i];
		a[i] = a[min];
		a[min] = swap;
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("before sorting:");
	for(i=0;i<n;i++)
	{
printf("%d ",arr[i]);
	}
	printf("\nafter sorting:");
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}



