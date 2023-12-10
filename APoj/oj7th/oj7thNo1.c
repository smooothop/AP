#include <stdio.h>
#include <stdlib.h>

int main(){

    signed short a;
    scanf("%hd", &a);
    a = abs(a);
    for(int i = sizeof(a)*8-1; i >= 0; i--){
        int result = a >> i & 1;
        printf("%hd", result);
    }
    count_bits(a);
    return 0;
}