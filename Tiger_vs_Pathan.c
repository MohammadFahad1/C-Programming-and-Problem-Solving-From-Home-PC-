#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        int pathanCount = 0;
        int tigerCount = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'T'){
                tigerCount++;
            }else if(s[i] == 'P'){
                pathanCount++;
            }
        }
        
        if(tigerCount > pathanCount){
            printf("Tiger\n");
        }else if(pathanCount > tigerCount){
            printf("Pathaan\n");
        }else{
            printf("Draw\n");
        }
    }
    
    return 0;
}