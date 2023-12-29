#include<stdio.h> // print index when marks less than 35
int main()
{
    int marks[10];
    for( int i=0; i<10; i++)
    {
        printf("enter the marks %d",i);
        scanf("%d ",&marks[i]);
    }
    for(int i=0; i<10; i++){
     if(marks[i]<35)
        printf("%d ", i);
      }

    return 0;
}
