#include<stdio.h>
#include<string.h>
int isCir(char str[]){
	char *pStr=str;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(*(pStr+i)==*(pStr+len-1-i)){
		}else{
			return 0;
		}
	}
	return 1;
}
int main(){
	char str[20];
	printf("Input string:");
	gets(str);
	if(isCir(str)==1){
		printf("Yes!");
	}else{
		printf("No!");
	}
}
