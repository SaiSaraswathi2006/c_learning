#include<stdio.h>
int *findladders(int A[],int n,int *rs){
	int j=1;
	static int B[100000];
	B[0] = A[n-1];
	for(int i = n-2; i>=0; i--){
		if(A[i]>B[j-1]){
			B[j++]=A[i];
		}
	}
	*rs=j;
	return B;
}
int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int j=0;
	int *returnsize=&j;
	int *ptr=findladders(A,n,returnsize);
	for(int i=j-1;i>=0;i--)
	printf("%d ",ptr[i]);
	}
