#include <stdio.h>

int main(){

	int a[100][100];
	int n, sum;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			a[i][j] = i*n+(j+1);
		}
	}
	for(int i = 0; i < n; i++){
		sum += a[i][i];
	}
	printf("%d", sum);
	
	return 0;
}