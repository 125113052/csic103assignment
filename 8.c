#include <stdio.h>

int main() {
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    int fact =1;
    for (int i = 1; i < n+1 ;i++)
    {
        fact*=i;
    }
    printf("the factorial of %d is %d\n",n,fact);
    
printf( "maryadit 125113052\n");
return 0;
}