#include<stdio.h>
int main()
{
    int a, b, c, m,n;
    printf("Enter a number to devide = ");
    scanf("%d",&n);
    printf("Enter a devider = ");
    scanf("%d",&m);
    a=n/m;
    b=m*a;
    c=n-b;
    printf("Reminder is = %d",c);

    return 0;
}
