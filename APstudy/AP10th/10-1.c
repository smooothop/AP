#include <stdio.h>

void adjust_point(int *n){

    if(*n < 0) *n = 0;
    if(*n > 100) *n = 100;
}

int main(){

    int point;

    printf("시험 점수 : ");
    scanf("%d", &point);

    adjust_point(&point);

    return 0;
}