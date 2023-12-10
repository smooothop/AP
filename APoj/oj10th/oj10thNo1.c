#include <stdio.h>

char grade(int *x){
    switch(*x / 10){
        case 10:
        case 9:
            return 'A';
            break;
        case 8:
            return 'B';     
            break;
        case 7:
            return 'C';
            break;
        case 6:
            return 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            return 'F';
            break;
    }
}

int main(){

    int n;
    scanf("%d", &n);
    printf("%c", grade(&n));

    return 0;
}