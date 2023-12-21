#include <stdio.h>

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	if(a < 0 || b < 0 || a+b > 10){
		printf("Error!");
	}
	else{
		for(int i = 1; i <= a; i++){
			for(int k = a; k > i; k--){
				printf(" ");
			}
			for(int j = 0; j < i; j++){
				printf("%d", b+j);
			}
			printf("\n");
		}
	}
	
	
	return 0;
}
