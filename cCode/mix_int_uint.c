#include <stdio.h>

int main(){
	int array[] = {1,2,3,4,5,6};
	int i =-1;
	
	if(i <= (int)sizeof(array)) printf("i <= sizeof(array )\n");
	else printf("i > sizeof(array )\n");

	return 0;
}
