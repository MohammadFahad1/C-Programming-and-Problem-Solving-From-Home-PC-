#include<stdio.h>

int main(){
    int X;
    long int AnnualSalary;
    scanf("%d", &X);
    AnnualSalary = (long int)X * 365;
    printf("%ld", AnnualSalary);
    return 0;
}