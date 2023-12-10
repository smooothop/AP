#include <stdio.h>

void ary_set(int *v, int n1, int n2, int val){
    for(int i = n1-1; i < n2; i++){
        v[i] = val;
    }

}

int main(){

    int n1, n2, val;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    scanf("%d %d %d", &n1, &n2, &val);
    ary_set(a, n1, n2, val);

    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}