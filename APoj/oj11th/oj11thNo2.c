#include <stdio.h>
#include <string.h>

void del_odds(char *p){
    int j = 0;
    for(int i = 0; i < strlen(p); i++){
        p[i] = p[j];
        j += 2;
    }
    //It might be 'NULL'automatically added to end of the array
}

int main(){

    char s[100];
    scanf("%[^\n]s", s);
    del_odds(s);
    printf("%s", s);



    return 0;
}