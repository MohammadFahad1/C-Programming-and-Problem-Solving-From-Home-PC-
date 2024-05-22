// My own method to solve this problem
/*
#include<stdio.h>

int main(){
    int n;
    while(n != 1999){
        scanf("%d", &n);
        if(n == 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}
*/


// Solving it using Phitron way (EOF - End Of File)
#include<stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n == 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}