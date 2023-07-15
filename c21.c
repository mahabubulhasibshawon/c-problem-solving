#include<stdio.h>
int main(void)
{
    int num1, num2 , add , sub , multification, division;
    printf("Please Enter a Number : ");
    scanf("%d",&num1);
    printf("Please Enter anothe Number : ");
    scanf("%d",&num2);
    add= num1+num2;
    sub= num1-num2;
    multification= num1*num2;
    division= num1/num2;

    printf("%d\n%d\n%d\n%d",add,sub,multification,division);

    return 0;


}
