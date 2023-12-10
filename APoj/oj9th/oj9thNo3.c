#include <stdio.h>
#include <string.h>

int main(){

    int slen = 0;
    char str[128];
    scanf("%[^\n]s", str);

    slen = strlen(str);

    for(int i = 0; i < slen; i++){
        if(str[i] != ' '){
            printf("%c", str[i]);
        }
    }

    return 0;
}