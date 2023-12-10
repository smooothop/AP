#include <stdio.h>

void print_A(int a){
    if(a > 0){
        for(int i = 0; i < a; i++){
            printf("A");
         }
        printf("\n");
        print_A(a-1);
    }
}

int main(){

    int n;
    scanf("%d", &n);
    print_A(n);

    return 0;
}