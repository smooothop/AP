#include <stdio.h>

int main(){

	int a;
	scanf("%d", &a);
	printf("%d, ", a/100);
	printf("%d, ", a%100/10);
	printf("%d", a%10);
	printf("\n");
	printf("%.2f", (a/100 + a%100/10 + a%10)*1.0/3);
	
	return 0;
}