#include<stdio.h>
int main()
 {
    int n,i,j;
    printf("enter the no of rows");
    scanf("%d",&n);
     for(i=1; i<=n; i++)//for row
    {   
        for(j=1; j<=i; j++) {   //for coloumn
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}