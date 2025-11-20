//Count the frequency of each element in an array.
#include <stdio.h>

int main() {
    int arr[]={1,1,2,3,4};
    int frequency[]={1,1,1,1,1};
    
    for(int i = 0;i<5;i++){
        int f=1;
        if(frequency[i]!=0){
            for(int j = i+1;j<5;j++){
                if(arr[j]==arr[j+1]){
                    f++;
                frequency[j]=0;                }
            }
        }
        frequency[i]=f;
    }
   for (int i = 0; i < 5; i++)
   {
    printf("the frequency  of the %d element is %d\n",arr[i],frequency[i]);
   }
   
    

    
    
    
printf( "maryadit 125113052\n");
return 0;
}