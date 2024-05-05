#include <stdio.h>
#include <string.h>

 int main(){

 char* chp1 = "c \0";
 char* chp = "c";
 char* chp2= "ff";
 char* strp = "fang";

 printf("%c \n",*chp);
 printf("size of chp  %zu \n", sizeof(*chp));
 printf("size of chp2 %zu \n", sizeof(*chp2));

 printf("str_len  of chp  %zu \n", strlen(chp));
 printf("str_len  of chp2 %zu \n", strlen(chp2));
 printf("str_len  of strp %zu \n", strlen(strp));



 printf("%s \n", chp);
 printf("%s \n", chp1);
 printf("%s \n", chp2);
 printf("%s \n", strp);

 return 0;
 }
