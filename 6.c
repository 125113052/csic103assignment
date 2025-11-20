#include <stdio.h>


int main() {
    int n,digit,revn=0;
    printf("enter any number\n");
    scanf("%d",&n);
    while(n !=0){
        digit = n%10;
        revn = revn*10 +digit;
        n/=10;
    }
    printf("the reversed number is  %d\n",revn);
    
printf( "maryadit 125113052\n");
return 0;
}