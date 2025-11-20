#include <stdio.h>

int main() {
    int n,digit,revn=0,a;
    a =n;
    printf("enter any number\n");
    scanf("%d",&n);
    while(n !=0){
        digit = n%10;
        revn = revn*10 +digit;
        n/=10;
    }
    if(revn==a)
    printf("%d is a palindrome number\n",n);

printf( "maryadit 125113052\n");
return 0;
}