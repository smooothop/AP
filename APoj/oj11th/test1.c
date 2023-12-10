#include <stdio.h>
#include <string.h>

char *change_p(char *p){
    p[0] = '0';
    return p;
}


int main()
{
    char p[100];
    scanf("%s", p);
    printf("%s", change_p(p));
    return 0;
}