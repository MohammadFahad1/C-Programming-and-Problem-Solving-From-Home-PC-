#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    long long int a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                long long int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    long long int sum = 0; 
    for(int i = n-k; i < n; i++){
        if(a[i] < 0){
            break;
        }
        sum += a[i];
    }
    printf("%lld\n", sum);
    return 0;
}