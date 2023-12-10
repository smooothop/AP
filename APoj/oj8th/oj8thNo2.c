#include <stdio.h>

int main(){

    int m, d;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    int total = 0;
    scanf("%d월 %d일", &m, &d);

    for(int i = 0; i < m-1; i++){
        days += month[i];
    }
    days = 365 - days;
    days = days - d + 1;
    printf("%d일 남음", days);

    return 0;
}