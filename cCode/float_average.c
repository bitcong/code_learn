#include <stdio.h>
#include <limits.h>

float average(float *arr, size_t size);

enum { array_size=10} ;

int main(){
	float arr[array_size];

	for(size_t i =0; i< array_size; i++) {
		arr[i] = 5.1;
	}

	printf(" total/size = %f \n", average(arr, array_size) );

	return 0;	

}

float average( float *arr, size_t size){

	float total = 0.0;

	if(size > 0 && size <= INT_MAX) {
		for( size_t i = 0; i < size; i++){
				printf(" arr[i] = %f, total = %f \n",arr[i], total);
				total += arr[i];
			}
	}

	return total/size;
}
