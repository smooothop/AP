#include <stdio.h>
#define NUMBER 80

int main(){

    int i, j;
    int num;
    int score[NUMBER];
    int dist[11] = {0};

    printf("학생 수를 입력해주세요.");

    do {
        scanf("%d", &num);
        if(num < 1 || num > NUMBER){
            printf("\a1~%d 사이로 입력해주세요. ", NUMBER);
        }
    } while(num < 1 || num > NUMBER);

    printf("%d명의 점수를 입력해주세요.\n", num);

    for(int i = 0; i < num; i++){
        printf("%2d번 : ", i + 1);
    }
    do {
        scanf("%d", &score[i]);
    }

    return 0;
}