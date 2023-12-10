#include <stdio.h>

int main(){
    
    int area = 0;
    int width = 0;

    scanf("%d", &area);
        for(width = 1; width <= area*2; width++){
            if(width*width > area*2){
                break;
            }
            if((area*2)%width == 0){
                printf("%d x %d\n", width, area*2/width);
            }
        }
    return 0;
}