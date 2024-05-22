#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int s = n-1, t = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < s; j++){
            printf(" ");
        }
        for(int k = 0; k <= t; k++){
            printf("*");
        }
        t+=2;
        s-=1;
        printf("\n");
    }
    return 0;
}