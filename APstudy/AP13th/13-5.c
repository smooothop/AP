#include <time.h>
#include <stdio.h>

char data_file[] = "feeling.dat";   /* 파일 이름 */

/*--- 이전 날짜, 시각, 기분을 가져와 출력 ---*/
void get_data(){
    FILE *fp;

    if((fp = fopen(data_file, "r")) == NULL)    /* 열기 */
        printf("이 프로그램을 처음 실행하는군요.\n");
    else{
        int year, month, day, h, m, s;
        char feeling[2048];     /* 이전의 기분 */

        fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        fscanf(fp, "%s", feeling);
        printf("이전 실행은 %d년 %d월 %d일 %d시 %d분 %d초였고 기분은 '%s'였습니다.\n", year, month, day, h, m, s, feeling);

        fclose(fp);     /* 닫기 */
    }
}

/*--- 이번 날짜, 시각, 기분을 쓰기 ---*/
void put_data(const char *feeling){
    FILE *fp;
    time_t current = time(NULL);            /* 지금 날짜와 시각 */
    struct tm *timer = localtime(&current); /* 요소별 시각(지역 시간) */

    if((fp = fopen(data_file, "w")) == NULL) /* 열기 */
        printf("\a파일을 열 수 없습니다.\n");
    else{
        fprintf(fp, "%d %d %d %d %d %d\n", 
            timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
            timer->tm_hour, timer->tm_min, timer->tm_sec);

            fprintf(fp, "%s\n", feeling);
            fclose(fp);
    }
}

int main(){

    char feeling[2048];

    get_data();     /* 이전 날짜, 시각을 가져와 출력 */

    printf("지금의 기분은 : ");
    scanf("%s", feeling);

    put_data(feeling);  /* 이번 날짜, 시각 쓰기 */

    return 0;
}