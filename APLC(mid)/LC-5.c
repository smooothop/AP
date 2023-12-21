#include <stdio.h>

void matrixAdd(int mx[3][3], int a[3][3], int b[3][3]) { 

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			mx[i][j] = a[i][j] + b[i][j];
		}
	}

}

int main() {
    int i, j;
    int mx[3][3] = { };
    int my[3][3] = { };

    // mx 와 my 행렬을 입력 받음
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &mx[i][j]);
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &my[i][j]);
		}
	}
    // 행렬 합 계산
    matrixAdd(mx, mx, my);

    // 행렬 합 결과 출력
    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", mx[i][j]);
		}
		printf("\n");
	}
    return 0;
}