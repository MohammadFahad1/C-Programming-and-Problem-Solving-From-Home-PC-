#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int Total = (n * (n + 1)) / 2;
    printf("%d", Total);
    return 0;
}