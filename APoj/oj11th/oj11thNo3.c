#include <stdio.h>
#include <string.h>
// 함수 자료형을 void로 바꿔도 k의 값을 수정하므로 반환되는 값은 같음
char str_sel(char *p, char c, char *k){
    for(int i = 0; i < strlen(p); i++){
        if(p[i] == c){
            for(int j = 0; j <= i; j++){
                k[j] = p[j];
            }
        }
        else {
            k[i] = '\0';
        }
    }
    return *k; 
    //k배열의 첫번째 문자를 반환 / k를 반환하는 것이 아니다.
}

int main()
{
    char p[100];
    char k[100];
    char c;
    scanf("%s %c", p, &c);

    if (str_sel(p, c, k)  == '\0')
        printf("NO.");
    else
        printf("이전문자는 %s입니다.", k);

    return 0;
}