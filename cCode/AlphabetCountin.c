#include<stdio.h>
#include<string.h>

#define CNT_CHAR_NUM 2*26

void AlphabetCounter( char a[], int n){

    int count[CNT_CHAR_NUM] = {0};
    //int kind = 10;

    for(int i = 0 ; i<n; ++i){
        if(a[i]-'A' >= 0) ++count[a[i]-'A'];
    }

    for(int i= 0; i<CNT_CHAR_NUM; ++i){
        //if(++kind > 1) putchar(';');
        if(count[i] > 0) printf("%c=%d \n", 'A'+ i, count[i]);
    }
}


int main(){
    char str[20] = "helloccFF";
    printf("strlen = %ld \n", strlen(str));
    AlphabetCounter(str, strlen(str));
    return 0;
}