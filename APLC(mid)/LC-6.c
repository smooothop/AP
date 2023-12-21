#include <stdio.h>

int main(){
	
	unsigned int n;
	int bits;
	int zcount = 0, ocount = 0;
	bits = sizeof(int) << 3;
	
	scanf("%d", &n);
	for(int i = bits-1; i >= 0; i--){
		int result = n >> i & 1U;
		printf("%d", result);
		if(result == 0){
			zcount++;
		}
		else if(result == 1){
			ocount++;
		}
	}
	
	printf("\n");
	printf("0 : %d\n", zcount);
	printf("1 : %d\n", ocount);
	
	return 0;
}