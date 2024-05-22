#include<stdio.h>

int main(){
    int X;
    scanf("%d", &X);
    if((X / 1000) % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}