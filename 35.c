#include <stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else
    return n*fact(n-1);
}


int main() {
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    
    printf("the factorial of %d is %d\n",a,fact(a));
printf( "maryadit 125113052\n");
return 0;
}