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
            if(i == j){
                if(ar[i][j] != ar[0][0]){
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
        printf("Scalar Matrix\n");
    }else{
        printf("Not a Scalar Matrix!\n");
    }

    return 0;
}