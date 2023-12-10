#include <stdio.h>

/*==xyz 구조체 ===*/
struct xyz{
    int x;
    long y;
    double z;
};

/*--- 키보드로 입력한 {x, y, z} 값으로 이루어진 xyz 구조체를 반환---*/
/*--- struct xyz 자료형을 사용한 함수 ---*/
struct xyz scan_xyz(){

    struct xyz temp;
    
    printf("int형 멤버 x의 값 : ");     scanf("%d", &temp.x);
    printf("long형 멤버 y의 값 : ");     scanf("%ld", &temp.y);
    printf("double형 멤버 z의 값 : ");     scanf("%lf", &temp.z);

    return temp; /*구조체를 그대로 반환*/
}

int main(){

    struct xyz s;
    
    s = scan_xyz(); //s안에 구조체 변수 삽입
    
    printf("s.x = %d\n", s.x);
    printf("s.y = %ld\n", s.y); //long형의 자릿수를 넘어서면 쓰레기값이 출력됨.
    printf("s.z = %f\n", s.z);

    return 0;
}