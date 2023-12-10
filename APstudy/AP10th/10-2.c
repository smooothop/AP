#include <stdio.h>

int is_leap(int y){ //이정도는 외워라(라이브코딩에서 안알려줌)
        return y % 4 == 0 && y % 100 != 0 || y % 400 == 0; 
}
void decrement_date(int *y, int *m, int *d){
    if(*d > 1)
        --*d;
    else {
        if(--*m < 1){
            --*y;
            *m = 12;
        }
    }

}


int days_of_month(int y, int m){
        int mdays[][12] = {
            {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /*평년*/
            {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /*윤년*/
        };
        return mdays[is_leap(y)][m - 1];
}


int main(){

    

    

    return 0;
}