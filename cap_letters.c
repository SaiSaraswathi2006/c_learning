#include<stdio.h>
int main(){
	char str[]="HELLO WORLD";
	int frq[52]={0};
	for(int i=0;str[i]!='\0';i++){
		frq[str[i]-'A']++;
	}
	for(int i=0;i<52;i++){
		if
		(frq[i]!=0){
		
			printf("%c--->%d\n",i+65,frq[i]);
	}
	}
}
