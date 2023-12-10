#include <stdio.h>

int main(){

    int a[10][5];
    int b[50];
    int n;
    int count = 0;


    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
            b[count] = a[i][j];
            count++;
        }
    }

    int temp;
    for(int i = count-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(b[j] < b[j+1]){
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < count; i++){
        printf("%d ", b[i]);
    }

    return 0;
}