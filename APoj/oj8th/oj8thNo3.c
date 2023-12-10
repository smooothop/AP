#include <stdio.h>

int main(){

    int cap_count = 0;
    int lit_count = 0;
    char ch;
    while( (ch = getchar()) != '\n') {
        if('A' <= ch && ch <= 'Z'){
            cap_count++;
        }
        if('a' <= ch && ch <= 'z'){
            lit_count++;
        }
        
    }
    printf("\n");
    printf("대문자");
    for(int i = 0; i < cap_count; i++){
        printf("*");
    }
    printf("\n");
    printf("소문자");
    for(int i = 0; i < lit_count; i++){
        printf("*");
    }
    

    return 0;
}