//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?

//Code

#include <stdio.h>
int main(){
    long long int n, i;
    printf("N: ");
    scanf("%lld", &n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%lld ", i);
            n /= i;
        }
    }
    printf("%lld", n);
    return 0;
}