#include <stdio.h>
#include <string.h>

void sort_array(int *a, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[100];
    int i;

    FILE *sfp;
    FILE *dfp;

    if ((sfp = fopen("data.txt", "r")) == NULL) {
        printf("\a복사할 내용이 있는 파일을 열 수 없습니다.\n");
    } else {
        if ((dfp = fopen("data_sorted.txt", "w")) == NULL) {
            printf("\a내용을 복사해 넣을 파일을 열 수 없습니다.\n");
        } else {
            i = 0;
            while (fscanf(sfp, "%d", &a[i]) == 1) {
                i++;
            }
            fclose(sfp);

            // 정렬 함수 호출
            sort_array(a, i);

            // 정렬된 결과를 파일에 쓰기
            for (int j = 0; j < i; j++) {
                fprintf(dfp, "%d\n", a[j]);
            }

            fclose(dfp);
        }
    }
    for (i = 0; i < 12; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
