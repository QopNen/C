#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	int i=0,countS;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	}
	countS=i;
	for(int j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
}
