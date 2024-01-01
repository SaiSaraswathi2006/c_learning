#include <stdio.h> 
int main() 
 { 
 double a, b, c, d; 
 double result; 
 
 printf("Enter the value of a: "); 
 scanf("%lf", &a); 
 printf("Enter the value of b: "); 
 scanf("%lf", &b); 
 printf("Enter the value of c: "); 
 scanf("%lf", &c); 
 printf("Enter the value of d: "); 
 scanf("%lf", &d); 
 
 result = a / b * c - b + a * d / 3; 
 
 printf("Result: %.2lf\n", result); 
 return 0; 
} 

