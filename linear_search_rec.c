#include<stdio.h>
int linear_search_rec(int *A,int n,int i, int key){
	if(i==n){
		return -1;
	}
	if(A[i]==key){
		return i;
	}
	return linear_search_rec(A,n,i+1,key);
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
	printf(" Key found at %d index",linear_search_rec(arr,n,0,key));
}
