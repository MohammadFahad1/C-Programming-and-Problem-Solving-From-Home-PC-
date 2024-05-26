#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int r[a][b];
    int c[a][b];
    for(int i = 0; i < a*2; i++){
        for(int j = 0; j < b; j++){
            if(i >= a){
                scanf("%d", &c[i-a][j]);
            }else{
                scanf("%d", &r[i][j]);
            }
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", r[i][j] + c[i][j]);
        }
        printf("\n");
    }

    return 0;
}