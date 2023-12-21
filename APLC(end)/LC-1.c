#include <stdio.h>

#define swap(a,b) int temp; temp = a; a = b; b = temp;

int main(){

	int n;
	float k;
	float a[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%f", &k);
		a[i] = k;
	}
	
	for(int i = 0; i < n; i++){
		for(int j = n-2; j >= i ; j--){
			if(a[j] > a[j+1]){
				float temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%.1f ", a[i]);
	}

	return 0;
}