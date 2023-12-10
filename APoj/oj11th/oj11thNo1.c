#include <stdio.h>
#include <string.h>

void changer(char *p){
    if('a' <= *p && *p <= 'z'){
        *p = *p - 32;
    }
    else if('A' <= *p && *p <= 'Z'){
        *p = *p + 32;
    }
    
}
int main(){

    char s[100];
    scanf("%[^\n]s", s);
    for(int i = 0; i < strlen(s); i++){
        changer(&s[i]);
        printf("%c", s[i]);
    }


    return 0;
}