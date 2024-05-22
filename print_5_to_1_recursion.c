#include<stdio.h>
void fun(int ar[], int i){
    if (i == 5) return;
    fun(ar, i+1);
    printf("%d ", ar[i]);
}
int main(){
    int ar[5] = {10,20,30,40,50};
    fun(ar ,0);
    return 0;
}