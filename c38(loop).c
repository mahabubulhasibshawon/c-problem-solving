#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    while(i<=100){
        printf("%d ",i);
        i++;
        if(i==50){
           break;
        }
    }

    return 0;
}
