#include<stdio.h>

int main(){
    int n, tmp, j;
    scanf("%d", &n);
    j = n-1;
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(i < j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}