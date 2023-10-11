#include<stdio.h>
int main()
{
    int min,b,final;
    int a=60;
    scanf("%d",&min);
    b=min/a;
    final=(min%a);
    printf("%d Hour(s) %d Minute(s)",b,final);
    
}