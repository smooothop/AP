#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int price;
    int sales;


}product;

void search_brand(product a[], int n){
    char search[100];
    scanf("%s", search);
    for(int i = 0; i < n; i++){
        if(strcmp(search, a[i].name) == 0){
            printf("%s %d %d", a[i].name, a[i].price, a[i].sales);
            break;
        }
    }
}
void print_arr(product arr[], int arr_len){
    int sum = 0;
    for(int i = 0; i < arr_len; i++){
        sum += arr[i].sales;
    }
    for(int i = 0; i < arr_len; i++){
        printf("%s %d %d\n", arr[i].name, arr[i].price, arr[i].sales);
    }
    printf("매출액 총계:%d", sum);
}



int main(){

    int select = 0;

    product a[5];
    for(int i = 0; i < 5; i++){
        scanf("%s %d %d", a[i].name, &a[i].price, &a[i].sales);
    }
    scanf("%d", &select);
    if(select == 1){
        search_brand(a, 5);
    }
    else if(select == 2){
        print_arr(a, 5);
    }

    return 0;
}