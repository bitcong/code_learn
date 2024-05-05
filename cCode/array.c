#include<stdio.h>

void change_array(int array[], int len){
        for(int i = 0; i <len ; i++){
        *(array+i) = i;
    }
}


int main(){
    int array [10] = {10};
    change_array(array, 10);
    for(int i = 0; i < 10 ; i++){
        printf("%d \n", *(array+i));
    }
    printf("array length: %ld \n", sizeof(array)/sizeof(array[0]));
    return 0;
}