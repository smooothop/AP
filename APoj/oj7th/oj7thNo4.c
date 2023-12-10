#include <stdio.h>
#include <math.h>

int main(){

    float f1, sumF = 0.00f;
    double d1, sumD = 0.00;
    int n;

    scanf("%d", &n);
    f1 = 0.00f;
    d1 = 0.00;
    for(int i = 0; i <= n; i++){
        sumF += f1;
        sumD += d1;

        f1 += 0.01f;
        d1 += 0.01;
    }
    printf("%.15f %.15f %.15f\n", sumD, sumF, fabs(sumD - sumF));

    return 0;
}