#include<stdio.h>
#include<string.h>
int main()
{
	//array of strings
	char *words[]={"Hello ","World"};
	for(int i=0;i<2;i++){
		printf("%s\n",words[i]);
		for(int j=0;j<strlen(words[i]);j++){
			printf("%c\n",words[i][j]);
		}
	}
}
