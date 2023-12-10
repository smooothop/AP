#include <stdio.h>

int idx_1(int a, int b){
    int c = a*3 + b;
    return c;
}
void print2x3(int *a){
    printf("%d %d %d\n", a[0], a[1], a[2]);
    printf("%d %d %d", a[3], a[4], a[5]);
}
void idx_2(int a){
    printf("(%d, %d)", a/3, a%3);
}
int main(void) {

  int matrix[6];
  //matrix값 입력
  scanf("%d %d %d", matrix + 0, matrix + 1, matrix + 2);
  scanf("%d %d %d", matrix + 3, matrix + 4, matrix + 5);

  printf("\nprint idx_1\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[idx_1(i, j)]);
    }
  }
  printf("\n");

  printf("\nprint2x3\n");
  print2x3(matrix);

  printf("\nprint idx_2\n");
  for (int i = 0; i < 6; i++) {
    idx_2(i);
    printf(" ");
  }
  printf("\n");

  return 0;
}