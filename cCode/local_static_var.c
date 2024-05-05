#include <stdio.h>

void count();

int main(){
	for(int i = 0; i <=5; i++) count();
	
	return 0;
}

void count(){
	static int num = 0;
	num++;

	printf("%d \n", num);

}
