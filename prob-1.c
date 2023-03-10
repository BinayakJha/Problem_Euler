#include <stdio.h>

int main(){
    int n, i, s=0;
    printf("N: ");
    scanf("%d", &n);
//    for finding the numbers below n which are multiple of 3 or 5
    for(i=1;i<n;i++){
        if(i%3==0 || i%5==0){
            printf("%d ", i);
            s += i;
        }
    }
    printf("\n Sum: %d", s);
}
