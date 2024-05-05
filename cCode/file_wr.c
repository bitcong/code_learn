#include<stdio.h>
#include<stdlib.h>

#define N 100

int main(){
    FILE *fp;
    char str[N+1];
    if( (fp = fopen("file_demo.txt", "rt")) == NULL){
        puts("Fail to open file");
        exit(0);
    }
    while( fgets(str, N, fp) != NULL){
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}