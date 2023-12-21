#include <stdio.h>
#include <string.h>

typedef struct {
	int id;		// 사번
	char name[20];	// 이름
	char city[20];	// 근무 도시
	int salary;	// 연봉
} Employee;

int main(){

	Employee ppl[5];
	int money;
	
	scanf("%d", &money);
	for(int i = 0; i < 5; i++){
		scanf("%d %s %s %d", &ppl[i].id, ppl[i].name, ppl[i].city, &ppl[i].salary);
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 3; j >= i ; j--){
			if(ppl[j].id > ppl[j+1].id){
				Employee temp;
				temp = ppl[j];
				ppl[j] = ppl[j+1];
				ppl[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i < 5; i++){
		printf("%d %-10s %-10s %d\n", ppl[i].id, ppl[i].name, ppl[i].city, ppl[i].salary);
	}
	printf("Above average (%d):\n", money);
	for(int i = 0; i < 5; i++){
		for(int j = 3; j >= i ; j--){
			if(ppl[j].salary < ppl[j+1].salary){
				Employee temp;
				temp = ppl[j];
				ppl[j] = ppl[j+1];
				ppl[j+1] = temp;
			}
		}		
	}
	
	int i = 0;
	while(i < 5){
		if(ppl[i].salary > money){
			printf("%d %-10s %-10s %d\n", ppl[i].id, ppl[i].name, ppl[i].city, ppl[i].salary);
		}
		i++;
	}


	return 0;
}
