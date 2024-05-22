#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    scanf("%s %s", a, b);
    int v = strcmp(a, b);
    if(v == 0){
        printf("Both contains the same value!\n");
    }else if(v < 0){
        printf("A is smaller than B!\n");
    }else{
        printf("B is smaller than A\n");
    }
    return 0;
}