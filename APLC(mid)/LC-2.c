#include <stdio.h>

int main(){
	
	int day;
	int month;
	scanf("%d %d", &month, &day);
	
	switch(month){ 
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			{
				printf("31 ");
				break;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			{
				printf("30 ");
				break;
			}
		case 2:
			{
				printf("28 ");
				break;
			}
	}	
	
	if(day%3 == 0){
		printf("Yes");
	}
	else{
		printf("No");
	}

	
	return 0;
}