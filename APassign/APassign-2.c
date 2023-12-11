#include <stdio.h>

#define NUM_MAX 20
#define NAME_LEN 20

void cal_grade(float avg, char *grade) {
    if (avg >= 90.0) {
        *grade = 'A';
    } else if (avg >= 80.0) {
        *grade = 'B';
    } else if (avg >= 70.0) {
        *grade = 'C';
    } else if (avg >= 60.0) {
        *grade = 'D';
    } else {
        *grade = 'F';
    }
}

int main() {
    FILE *sfp;
    FILE *dfp;
    char name[NUM_MAX][NAME_LEN];
    int scores[NUM_MAX][5];  // 5번째 열 추가 (총점)
    float avg[NUM_MAX];
    char grades[NUM_MAX];
    int i;

    if ((sfp = fopen("score_src.txt", "r")) == NULL) {
        printf("\a성적 파일을 열 수 없습니다.\n");
        return 1;
    }

    if ((dfp = fopen("score_grade.txt", "w")) == NULL) {
        printf("\a성적 평점 파일을 열 수 없습니다.\n");
        fclose(sfp);
        return 1;
    }

    i = 0;
    while (fscanf(sfp, "%[^,], %d, %d, %d, %d, %d, %f",
                name[i], &scores[i][0], &scores[i][1],
                &scores[i][2], &scores[i][3], &scores[i][4], &avg[i]) == 7) {
        cal_grade(avg[i], &grades[i]);
        fprintf(dfp, "%s, %d, %d, %d, %d, %d, %.2f, %c",
                name[i], scores[i][0], scores[i][1],
                scores[i][2], scores[i][3], scores[i][4], avg[i], grades[i]);
        i++;
    }

    fclose(sfp);
    fclose(dfp);

    printf("성적 평점을 score_grade.txt에 저장했습니다.");

    return 0;
}
