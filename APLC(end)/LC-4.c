#include <stdio.h>


void get(double *value, int *i_part, double *f_part){
	*i_part = (int)*value;
	*f_part = *value - *i_part; 
}

int main(){

	double in_num;
	double f_part;
	int i_part;	
	
	scanf("%lf", &in_num);
	get(&in_num, &i_part, &f_part);
	printf("%d %f", i_part, f_part);

	return 0;
}