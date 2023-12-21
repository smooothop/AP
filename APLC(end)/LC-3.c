#include <stdio.h>
#include <string.h>

void reverse_str(char *str){
	char ptr[100] = {0};
	for(int i = 0; i < strlen(str); i++){
		ptr[i] = str[strlen(str)-i-1];
	}
	printf("%s", ptr);
}


int main(){

	char s[100];
	scanf("%s", s);
	reverse_str(s);

	return 0;
}