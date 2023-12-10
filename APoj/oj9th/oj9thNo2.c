#include <stdio.h>
#include <string.h>

int main(){

    char str[128];
    int slen = 0;

    scanf("%[^\n]s", str);
    //gets(str)도 가능

    slen = strlen(str);

    for(int i = 0; i < slen; i++){
        printf("%c", str[i]);
    }
    for(int i = slen-1; i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
}