#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5]={12,3,34,45};
    a[5]=(rand( )%42) + 3;
    printf("%d\n", a[5]);
    printf("%d\n", a[5]);
    printf("%d", a[5]);
    return 0;
}