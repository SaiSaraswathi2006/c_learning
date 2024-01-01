#include<stdio.h>
int product(a,b){
	return a*b;
}
int main()
{
	int a,b,res;
	scanf("%d %d",&a,&b);
	res=product(a,b);
	printf("%d",res);
}
