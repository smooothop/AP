#include <stdio.h>

void swap(int *px, int *py){

    int temp = 0;
    temp = *px;
    *px = *py;
    *py = temp;

}	
void sort(int *v, int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            if(*(v+j) < *(v+j+1)){
                swap(&*(v+j), &*(v+j+1));
            }
        }
    }


}

int main(){

    int a[10] = {0};

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    sort(a, 10);
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}