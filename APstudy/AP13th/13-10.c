/* 파일 안의 내용 중 소문자를 대문자로 변환하면서 복사 */
#include <ctype.h>
#include <stdio.h>

int main(){

    int ch;
    FILE *sfp;                  /* 복사할 내용이 있는 파일 */
    FILE *dfp;                  /* 내용을 복사해 넣는 파일 */
    char sname[FILENAME_MAX];   /* 복사할 내용이 있는 파일 이름 */
    char dname[FILENAME_MAX];   /* 내용을 복사해 넣는 파일 이름 */

    printf("복사할 내용이 있는 파일 이름 : "); scanf("%s", sname);
    printf("내용을 복사해 넣을 파일 이름 : "); scanf("%s", dname);

    if((sfp = fopen(sname, "r")) == NULL)       /* 복사할 내용이 있는 파일 열기 */
        printf("\a복사할 내용이 있는 파일을 열 수 없습니다.\n");
    else{
        if((dfp = fopen(dname, "w")) == NULL)   /* 내용을 복사해 넣을 파일 열기 */
            printf("\a내용을 복사해 넣을 파일을 열 수 없습니다.\n");
        else{
            while((ch = fgetc(sfp)) != EOF){
                fputc(tolower(ch), dfp);
            }
            fclose(dfp);    /* 내용을 복사해 넣을 파일 닫기 */  
        }
        fclose(sfp);        /* 복사할 내용이 있는 파일 닫기 */
    }
    return 0;
}