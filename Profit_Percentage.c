#include<stdio.h>
int main()
{
    float sp,cp,loss,final;
    scanf("%f%f",&sp,&cp);
    loss=cp-sp;
    final=(loss/sp)*100;
    printf("%.2f",final);
    return 0;
}