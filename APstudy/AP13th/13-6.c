#include <stdio.h>

int main(){

    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];   /* 파일 이름 */
    int n_count = 0;            /* 줄 바꿈 문자 개수 */

    printf("파일 이름 : ");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL)    /* 열기 */
        printf("\a파일을 열 수 없습니다.\n");
    else{
        while((ch = fgetc(fp)) != EOF)
            if(ch == '\n')
                n_count++;
        fclose(fp);

        printf("이 파일은 %d줄입니다.\n", n_count);
    }


    return 0;
}