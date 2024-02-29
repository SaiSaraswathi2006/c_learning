#include<stdio.h>
int linear_search_ite(int *A,int size,int k){
	for(int i=0;i<size;i++){
		if(A[i]==k){
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	int result = linear_search_ite(arr,n,key);
	if(result==-1){
		printf("Element not found");
		
	}
	else {
		return result;
	}
}
