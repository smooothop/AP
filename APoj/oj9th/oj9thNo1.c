#include <stdio.h>
#include <string.h>

int main(){

    char a[10][127];
    char *search = "$END$";
    int i = 0;

    while(i < 10){
        scanf("%s", a[i]);
        if('A' <= a[i] && a[i] <= 'Z' || 'a' <= a[i] && a[i] <= 'z'){
            i++;
        }
        if(strchr(a[i], *search)){
            break;
        }
    }
    for(int j = 0; j < i; j++){
        printf("%s\n", a[j]);
    }
    return 0;
}