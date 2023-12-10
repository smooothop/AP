#include <stdio.h>
#include <string.h>
#define NUM_MAX 50      /*--읽어 들인 사람 수의 상한--*/
#define NAME_LEN 100    /*--이름용 문자열의 요소 개수--*/

int main(){

    FILE *fp;
    int i, j;
    int number = 0;
    char name[NAME_LEN][NUM_MAX];
    double height[NUM_MAX];
    double weight[NUM_MAX];
    double hsum = 0.0;
    double wsum = 0.0;

    if((fp = fopen("hw.dat", "r")) == NULL){ /*열기*/
        printf("\a파일을 열 수 없습니다.\n");
    }
    else{
        for(i = 0; i < NUM_MAX; i++){
            if(fscanf(fp, "%s%lf%lf", name[number], &height[number], &weight[number]) != 3){
                break;
            }
        }
        
        hsum += height[number];
        wsum += weight[number];
        number++;
    }

    for(i = 0; i < number - 1; i++){ /*키를 오름차순으로 정렬*/
        for(j = number -1; j > 1; j--){
            if(height[j-1] > height[j]){
                char tn[NAME_LEN];
                double td;
                strcpy(tn, name[j]);
                strcpy(name[j], name[j-1]);
                strcpy(name[j-1], tn);
                td = height[j]; height[j] = height[j-1]; height[j-1] = td;
                td = weight[j]; weight[j] = weight[j-1]; weight[j-1] = td;
            }
        }
    }

    for(i = 0; i < number; i++){
        printf("%-10s %5.1f %5.1f\n", name[i], height[i], weight[i]);
    }
    printf("---------------------------\n");
    printf("평균    %5.1f %5.1f\n", hsum/number, wsum/number);
    fclose(fp);

    return 0;
}