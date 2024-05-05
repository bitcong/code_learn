#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *GetHello(void){
	char *p = NULL;
	p = (char*) malloc(100);
	return p;
}

int main(){
	char *str = NULL;
	str = GetHello();
	
	strcpy(str, "hello cong");
	printf("%s \n", str);
	free(str);


	return 0;
}
