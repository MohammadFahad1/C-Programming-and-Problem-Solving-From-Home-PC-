#include<stdio.h>

int main(){
    char X;
    scanf("%c", &X);
    if(X >= 65 && X <= 90){
        X = X + 32;
    }else{
        X = X - 32;
    }
    printf("%c", X);
    return 0;
}