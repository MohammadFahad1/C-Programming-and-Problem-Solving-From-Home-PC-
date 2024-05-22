#include<stdio.h>

int main(){
    int a, b, max = 0;
    scanf("%d\n", &a);
    for(int i = 0; i < a; i++){
        scanf("%d", &b);
        if(b > max){
            max = b;
        }
    }
    printf("%d", max);
    return 0;
}