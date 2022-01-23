#include<stdio.h>
#include<string.h>
int numbers(char str[]){
	char num[]={"0123456789"},*pStr=str;
	int lenS=strlen(str),lenN=strlen(num),count=0;
	for(int i=0;i<lenS;i++){
		for(int j=0;j<lenN;j++){
			if(*(pStr+i)==num[j]){
				count++;
			}
		}
	}
	return count;
}
int main(){
	char str[20];
	printf("Please input a string.\n");
	printf("The string can store 20 character:");
	gets(str);
	printf("There are %d numbers in %s",numbers(str),str);
}
