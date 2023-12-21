#include <stdio.h>
#include <string.h>

#define SIZE 100

void CapitalizeWords(char *str) {
    str[0] = str[0] - 32;
    
    int i = 0;
    while(str[i] != '\0'){
    	if(str[i] == ' '){
    		str[i+1] = str[i+1] -32;
    	}
    	i++;
    }
    
}

int main() {

    char input[SIZE];
    scanf("%[^\n]s", input);

    CapitalizeWords(input);

    printf("%s\n", input);
    return 0;
}