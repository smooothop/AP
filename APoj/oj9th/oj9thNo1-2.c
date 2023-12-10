#include <stdio.h>
#include <string.h>

int main(){

    char str[10][127];
    int i = 0;

    while(i < 10){
        scanf("%s", str[i]);
        if(strcmp("$END$", str[i]) == 0){
            break;
        }
        i++;
    }
    for(int j = 0; j < i; j++){
        printf("%s\n", str[j]);
    }

    return 0;
}