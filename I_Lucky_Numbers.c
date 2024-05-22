#include<stdio.h>

int main(){
    int a, fd, ld;
    scanf("%d", &a);
    fd = a / 10;
    ld = a % 10;
    if(fd != 0 && ld != 0){
        if(ld % fd == 0 || fd % ld == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }else{
        printf("YES\n");
    }
    return 0;
}