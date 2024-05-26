#include<stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &ar[i][j]);
        }
    }

    int flag = 0;

    if(row != col){
        flag = 1;
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i+j == row-1){
                if(ar[i][j]!=1){
                    flag = 1;
                }
                continue;
            }

            if(ar[i][j] != 0){
                flag = 1;
            }
        }
    }

    if(flag == 0){
        printf("Secondary Diagonal Unit Matrix!");
    }else{
        printf("Not Secondary Diagonal Unit Matrix!");
    }
    
    return 0;
}