#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x >= 3){
        if(x % 3 == 0){
            printf("%d", x / 3);
        }else{
            printf("%d", x / 3 + 1);
        }
    }else if(x >= 2){
        if(x % 2 == 0){
            printf("%d", x / 2);
        }else{
            printf("%d", x / 2 + 1);
        }
    }else{
        printf("%d", 1);
    }
    return 0;
}