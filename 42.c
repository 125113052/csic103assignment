#include <stdio.h>
void sqr(int a){
    a*=a;
}
void sqrptr(int*p){
    *(p)*=*(p);
}
int main() {
    int a =10;
    sqr(a);
    printf("%d \n",a );
    sqrptr(&a);
    printf("%d\n",a);
printf( "maryadit 125113052\n");
return 0;
}