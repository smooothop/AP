#include <stdio.h>
#include <string.h>

#define NAME_LEN 100 /*--이름용 문자열의 요소 개수--*/

int main(){

    FILE *fp;
    int i;
    char name[NAME_LEN]; /* 이름 */
    double height;       /* 키 */
    double weight;       /* 몸무게 */

    if((fp = fopen("hw2.dat", "w")) == NULL) /* 열기 */
        printf("\a파일을 열 수 없습니다.\n");
    else{
        for(i = 0; ; i++){
            int flag;
            printf("%d명째의 데이터를 입력하겠습니까? (예...1/종료...0) \n", i+1);
            scanf("%d", &flag);
            if(flag == 0) break;

            printf("이름     : "); scanf("%s", name);
            printf("키       : "); scanf("%lf", &height);
            printf("몸무게    : "); scanf("%lf", &weight);
            fprintf(fp, "%s %.2f, %.2f\n", name, height, weight);
        }
        fclose(fp);     /* 닫기 */
    }

    return 0;
}