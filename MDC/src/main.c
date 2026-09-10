#include<stdio.h>
#include<stdlib.h>
#include "fastmdc.h"

int main(){
    FILE *input = freopen("tests/input", "r", stdin);
    if(input == NULL){
        perror("freopen failed");
        return 1;
    }
    ll a, b;
    while(scanf("%lld %lld", &a, &b) == 2){
        printf("MDC de %lld e %lld é %lld\n", a, b, mdc(a, b));
    }
}
