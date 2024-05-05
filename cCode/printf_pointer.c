#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int * p ;
	p = (int*)malloc(sizeof(int));
	*p = 128;

	//printf("%p \n", &p);
	printf("%p \n", p);
	printf("%d \n", *p);

	free(p);
	return 0;
}
