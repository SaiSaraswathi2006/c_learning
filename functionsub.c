#include<stdio.h>
int sub(int a,int b){
	return a-b;
}
int main()
{
	int a,b,res;
	scanf("%d %d",&a,&b);
	res=sub(a,b);
	printf("%d",res);
}
