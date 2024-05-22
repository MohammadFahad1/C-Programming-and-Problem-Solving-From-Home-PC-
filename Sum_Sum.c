#include<stdio.h>

int main(){
    int n, Pos = 0, Neg = 0;
    scanf("%d\n", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < n; i++){
        if(v[i] > 0){
            Pos += v[i];
        }else{
            Neg += v[i];
        }
    }

    printf("%d %d", Pos, Neg);
    
    return 0;
}