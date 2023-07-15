//this programme is for calculating sgpa
#include<stdio.h>

int main()
{
    int grade, credit, a, b, c, d, e, f,g1,g2,g3, g4, g5,c1,c2,c3,c4,c5, result ;
    printf("input your eng credit: ");
    scanf("%d",&c1);
    printf("input your eng grade: ");
    scanf("%d",&g1);
    printf("input your ged credit: ");
    scanf("%d",&c2);
    printf("inpur your ged grade: ");
    scanf("%d",&g2);
    printf("input your cse credit: ");
    scanf("%d",&c3);
    prinf("input your cse grade: ");
    scanf("%d",&g3);
    printf("input your phy credit: ");
    scanf("%d",&c4);
    printf("input your phy grade: ");
    scanf("%d",&g4);
    printf("input your phy lab credit: ");
    scanf("%d",&c5);
    printf("inpur your phy lab grade: ");
    scanf("%d",&g5);
    grade=g1+g2+g3+g4+g5;
    credit=c1+c2+c3+c4+c5;
    result=(((g1*c1)+(g2*c2)+(g3*c3)+(g4*c4)+(g5*c5))/16);


    return 0;
}

