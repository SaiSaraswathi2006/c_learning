#include<stdio.h>

int main()
{
    
        float s;
        int u, t, a;
        printf("Please enter the initial velocity = ");
        scanf("%d",&u);
         printf("Please enter the time = ");
        scanf("%d",&t);
         printf("Please enter acceleration = ");
        scanf("%d",&a);
        s=(u*t)+(0.5*a*t*t);
        printf("Total distance is %f",s);

}
