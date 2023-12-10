#include <stdio.h>

typedef struct xy{
    int x;
    int y;
}point;
int quadrant(point p){
    if(p.x > 0 && p.y >0)
        return 1;
    else if(p.x < 0 && p.y > 0)
        return 2;
    else if(p.x < 0 && p.y < 0)
        return 3;
    else if(p.x > 0 && p.y < 0)
        return 4;
            
}

int main(){

    point position;
    scanf("%d %d", &position.x, &position.y);
    printf("사분면=%d", quadrant(position));

    return 0;
}