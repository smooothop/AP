#include <stdio.h>

int main(){

    int a = 0, b = 0, max = 0, count = 0;
    scanf("%d %d", &a, &b);
    a > 0 , b > 0;
    if(a > b){
        max = a;
    }
    else{
        max = b;
    }
    int n = 1;
    while(n <= max){
        if((a % n == 0) && (b % n == 0)){
            printf("%d ", n);
            count++;
        }
        n++;
    }
    printf("\n");
    printf("공약수는 %d개", count);
    return 0;
}