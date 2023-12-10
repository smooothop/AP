#include <stdio.h>
#include <string.h>

void phone_number(char *m, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        printf("%c", m[i]);
        count++;
        if(count == 3 || count == 7){
            printf("-");
        }
    }
}


typedef struct person {
    int number;
    char name[100];
    char phone_num[100];
}Person;


int main(){

    Person person;
    scanf("%d %s %s", &person.number, person.name, person.phone_num);
    printf("%d\n", person.number);
    printf("%s\n", person.name);
    phone_number(person.phone_num, strlen(person.phone_num));    
    

    return 0;
}