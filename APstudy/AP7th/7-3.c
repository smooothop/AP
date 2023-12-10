#include <stdio.h>

int main(){

    printf("char형은 %u바이트 \n", (unsigned)sizeof(char));
    printf("short형은 %u바이트\n", (unsigned)sizeof(short));
    printf("int형은 %u바이트  \n", (unsigned)sizeof(int));
    printf("long형은 %u바이트 \n", (unsigned)sizeof(long));

    // sizeof연산자 
    // 자료형의 크기를 알 수 있다.
    // sizeof 연산자의 두 가지 이용 형식
    // 1. sizeof(자료형)
    // 2. sizeof 식
    // 배열 전체의 크기를 요소 한 개의 크기로 나누면
    // 배열의 요소 개수가 된다. 
    // 그러므로 배열 a의 요소 개수는 sizeof(a) / sizeof (a[0])이다.
    return 0;
}