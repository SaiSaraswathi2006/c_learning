#include<stdio.h>
int main()
{
	int num,deci=0,i=1;
	scanf("%d",&num);
	int temp=num;
	while (temp){
		int lastdigit=temp%10;
		temp/=10;
		deci+=lastdigit*i;
		i*=2;
	}
	printf("%d",deci);
	}
