#include <stdio.h>

void print_bits(short x){
    int n = sizeof(short) << 3;
    for(int i = 0; i < n; i++){
        int result = x >> i & 1;
        printf("%d", result);
    }

}

int main(){

    short a;
    scanf("%hd", &a);
    print_bits(a);

    return 0;
}