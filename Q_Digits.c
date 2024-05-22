#include<stdio.h>

int main(){
    int n, m;
    scanf("%d \n", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        do{
            printf("%d ", m % 10);
            m = m / 10;
        }while(m != 0);
        printf("\n");
    }

    return 0;
}