#include <stdio.h>

int main(){

    int a[100];
    int i, ch;
    FILE *sfp;
    FILE *dfp;

    sfp = fopen("data.txt", "r");
    dfp = fopen("data_sorted.txt", "r");

    i = 0;
    while((ch = fgetc(sfp)) != EOF){
        a[i] = ch;
        printf("%d\n", ch);
        i++;
    }
    int j = 0;
    
    fclose(sfp);
    fclose(dfp);


    return 0;
}