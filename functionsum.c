#include<stdio.h>
int hello(int a, int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int product(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
int main()
{
	int b,a,res1,res2,res3;
	float res4;
	scanf("%d %d",&a,&b);
	res1=hello(a,b);
	printf("%d\n",res1);
	res2=sub(a,b);
	printf("%d\n",res2);
	res3=product(a,b);
	printf("%d\n",res3);
	res4=div(a,b);
	printf("%f\n",res4);
	
}
