#include <stdio.h> 
int main() 
 { 
 int i,j; 
 printf(“enter the value of i:”); 
 scanf(“%d”,&i); 
 j = (i++) + (++i); 
 printf("j value is : %d\n", j); 
 return 0; 
}
