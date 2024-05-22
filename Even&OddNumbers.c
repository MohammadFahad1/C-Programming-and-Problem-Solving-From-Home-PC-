// 4 Odd Numbers Whose summation is N
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int X = (N - 12) / 4;
    printf("%d %d %d %d", X, X + 2, X + 4, X + 6);
    return 0;
}


// 5 Even Numbers Whose summation is N
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int X = (N - 20) / 5;
    printf("%d %d %d %d %d", X, X + 2, X + 4, X + 6, X + 8);
    return 0;
}