#include<stdio.h>  
  
void swap(int, int);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);  
  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int d;  
  
    d = x;  
    x    = y;  
    y    = d;  
  
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
}  