#include<stdio.h>
void print_array(int *A,int size){
	for(int i=0;i<size;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
int swap(int * arr, int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	
}
int bubble_sort(int arr[],int n){
	int i;
	int j;
	for( i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(arr,j,j+1);
			
			
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("Before sorting:\t");
    print_array(A,n);
    bubble_sort(A,n);
    printf("After sorting:\t");
    print_array(A,n);
    
	
	
}
