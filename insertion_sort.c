#include<stdio.h>
void print_array(int *A,int size){
	for(int i=0;i<size;i++){
		print("%d",A[i]);
	}
	printf("\n");
}
void intersection_sort(int *A,int size){
	for(int i=1;i<size;i++){
		int key A[i];
		int j=i-1;
		while(j>=0&&A[j]>key){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
int main()
{
	
}
