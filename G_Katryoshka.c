#include<stdio.h>

int main(){
    long long int eye, mouth, body, min = 0;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    if(eye < mouth && eye < body){
        min = eye;
    }else if(mouth < eye && mouth < body){
        min = mouth;
    }else{
        min = body;
    }
    
    eye -= min;
    eye = eye / 2;
    mouth -= min;
    body -= min;

    if(eye <= body){
        printf("%lld", eye + min);
    }else{
        printf("%lld", body + min);
    }
    return 0;
}