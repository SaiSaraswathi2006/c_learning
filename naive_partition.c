#include<stdio.h>
void print_array(int *A,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
int partition(int *A,int l,int h){
	int pivot=A[l];
	int k=0;
	int result[h-l+1];
	for(int i=l;i<=h;i++){
		if(A[i]<=pivot){
			result[k++]=A[i];
		}
	}
	int output_index=l+k;
	result[k++]=pivot;
	for(int i=l+1;i<=h;i++){
		if(A[i]>pivot){
			result[k++]=A[i];
		}
	}
	k=0;
	for(int i=l;i<=h;i++){
		A[i]=result[k];
		k++;
	}
	return output_index;
}
void quick_sort(int *A,int l,int h){
	if(l<h){
		int p=partition(A,l,h);
		quick_sort(A,l,p-1);
		quick_sort(A,p+1,h);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sorting:");
	print_array(arr,n);
	
	
	printf("After sorting: ");
	print_array(arr,n);
	return 0;
}
