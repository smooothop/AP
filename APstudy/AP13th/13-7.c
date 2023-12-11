#include <stdio.h>

int main(){

    int i, ch;
    FILE *fp;
    char fname[FILENAME_MAX];   /* 파일 이름 */
    int cnt[10] = {0};          /* 숫자 문자 개수 */

    printf("파일 이름 : ");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL)
        printf("\a파일을 열 수 없습니다.\n");
    else{
        while((ch = fgetc(fp)) != EOF){
            if('0' <= ch && ch <= '9')
                cnt[ch - '0']++;
        }
        fclose(fp);

        puts("숫자 문자의 출현 횟수");
        for(i = 0; i < 10; i++){
            printf("'%d' : %d\n", i, cnt[i]);
        }
    }



    return 0;
}