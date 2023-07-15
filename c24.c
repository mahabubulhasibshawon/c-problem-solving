#include<stdio.h>

int main(){
    int i1,i2,quotient,remainder;
    float f1,f2,result;

    scanf("%d%d%f%f",&i1,&i2,&f1,&f2);
    quotient=i1/i2;
    remainder=i1%i2;
    result=f1/f2;

    printf("%d\n%d\n%f",quotient,remainder,result);

    return 0;
}
