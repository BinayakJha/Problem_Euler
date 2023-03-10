#include <stdio.h>

int main(){
    int a = 1, b = 2,i,c,s=0;
    for(i=0;i<11;i++){
        c = a+b;
        printf("%d %d %d ",a,b,c);
        if(b%2==0){
            s += b;
        }
        a = b+c;
        b = c+a;
    }
    printf(" \n Sum Of Even Valued Term = %d ",s);
}