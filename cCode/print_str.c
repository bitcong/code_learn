#include <stdio.h>

void print_str (char *str[]){
	//	while(*str!= NULL){
	//	printf("%s \n", *str++);
	
	while( *str != NULL){

	char *str1 = *str;

		while(*str1 != '\0'){
			printf("%c", *str1++);
		}
		str++;	
		printf("\n");

	}
	
}

int main(void){
	char *test[]={"one", "tow", "three", NULL};
	print_str(test);
	return 0;
}
