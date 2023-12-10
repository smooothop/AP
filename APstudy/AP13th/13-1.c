#include <stdio.h>

int main(){

    FILE *fp;
    char fname[256];

    printf("파일 이름 : ");
    scanf("%s", fname);

    fp = fopen(fname, "r"); /*파일 열기*/

    if(fp == NULL)
        printf("이 파일은 없습니다.\n");
    else{
        printf("이 파일은 있습니다.\n");
        fclose(fp); /*파일 닫기*/
    }

    return 0;
}