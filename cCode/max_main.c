#include <stdio.h>

static int g_X=10;
static int g_Y=20;

int max();

int main(){
	int result;
	result = max();
	printf("the max value = %d \n", result);

	return 0;
}
