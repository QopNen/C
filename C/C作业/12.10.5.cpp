#include<stdio.h>
#include<string.h>
void deletechar(char str[],char d){
	int len=strlen(str);
	char *pStr=str;
	for(int i=0;i<len;i++){
		if(*(pStr+i)!=d){
			printf("%c",*(pStr+i));
		}
	}
} 
int main(){
	char str[20],d;
	printf("Please input a string.\n");
	printf("The string can store 20 character:");
	gets(str);
	printf("Please input the character you want delete:");
	scanf("%c",&d);
	printf("After deleting,The string is ");
	deletechar(str,d);
}
