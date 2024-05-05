#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char *StrToUpper (char *str){
	//const char buffer[100];
	int i = 0;
	for ( i=0; str[i] ; i++){
		//buffer[i] = toupper (str[i]);
		//buffer[i] = (char)(str[i]-24);
		str[i] = toupper(str[i]);
	}
	//buffer[i] = '\0';

	//return buffer;
	return str;
}

void PrintStr(char *out_str){
	
	for (int i=0; out_str[i]; i++){
		printf("%c", out_str[i]);
	}
	printf("\n");
}


int main(){
	char in_str1[] = "abcdef";
	char in_str2[] = "ghijkl";

	char * out_str1 = StrToUpper(in_str1);
	char * out_str2 = StrToUpper(in_str2);	
	
	PrintStr(out_str1);
	PrintStr(out_str2);

	return 0;

}
