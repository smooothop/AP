#include <stdio.h>

#define NAME_LEN 64  /*이름 문자 수*/

struct student { /*student는 구조체 태그*/
    char name[NAME_LEN]; /*이름(멤버)*/
    int height; /*키*/
    float weight; /*몸무게*/
    long schols; /*장학금*/
}; /*구조체 선언*/
/*해당 선언으로 struct student라는 자료형 생성.*/

int main(){

    struct student sangman = {"박재호", 173, 86.2};

    printf("이름    = %s %p\n", sangman.name, &sangman.name);
    printf("키      = %d %p\n", sangman.height, &sangman.height);
    printf("몸무게  = %.1f %p\n", sangman.weight, &sangman.weight);
    printf("장학금  = %ld %p\n", sangman.schols, &sangman.schols);



    return 0;
}