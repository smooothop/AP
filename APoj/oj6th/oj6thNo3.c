#include <stdio.h>

void scan_matrix(int *a, int x, int y){
    

    for(int i = 0; i < x*y; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            
        }
    }
}
void print_matrix(int *a, int x, int y){
    int n[25][25];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            n[i][j] = a[i*y+j];
           printf("%d ", n[i][j]);
        }
        printf("\n");
    }
}
void find_2D(int *a, int x, int y, int k){
    printf("value %d is found at ", k);
    for(int i = 0; i < x*y; i++){
        if(k == a[i]){
            printf("(%d, %d) ", i/y, i%x);
        }
    }
    
}

int main(void) {
  int r,c;
  int matrix[512]; //matrix 아닌 다른 배열은 사용하지 못한다.
  printf("matrix shape: ");
  scanf("%d %d", &r, &c);

  scan_matrix(matrix, r, c);// matrix 요소 값을 입력 받는 함수.
  
  printf("----------\n");
  
  print_matrix(matrix,r, c);

  printf("----------\n");
  find_2D(matrix, r, c, matrix[1]);//matrix[i] 요소 값을 가진 모든 요소의 2차원 index 출력.
  return 0;
}