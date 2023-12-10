#include <stdio.h>
#define NAME_LEN 64

typedef struct student {     /*student는 구조체 태그*/
    char name[NAME_LEN];     /*이름(멤버)*/
    int height;              /*키*/
    float weight;            /*몸무게*/
    long schols;             /*장학금*/
} Student;
/*struct student(자료형 이름)은 Student와 같다.*/

/*std가 가리키는 학생의 키를 180cm까지 늘리고 몸무게를 80kg까지 줄이는 함수*/
void heeyoon(Student *std){
    if (std->height < 180) std->height = 180; /*std->height는 *(std).height와 같음.*/
    if (std->weight > 80)  std->weight = 80;
}

int main(){

    Student gildong;

    printf("이름    : "); scanf("%s", gildong.name);
    printf("키      : "); scanf("%d", &gildong.height);
    printf("몸무게  : "); scanf("%f", &gildong.weight);
    printf("장학금  : "); scanf("%ld", &gildong.schols);

    heeyoon(&gildong);

    printf("이름    = %s\n", gildong.name);
    printf("키      = %d\n", gildong.height);
    printf("몸무게  = %.1f\n", gildong.weight);
    printf("장학금  = %ld\n", gildong.schols);


    return 0;
}