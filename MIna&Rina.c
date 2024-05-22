#include<stdio.h>

int main(){
    int X, Y, M, R;
    scanf("%d %d", &X, &Y);
    R = (X - Y) / 2;
    M = R + Y;
    printf("%d %d", M, R);
    return 0;
}