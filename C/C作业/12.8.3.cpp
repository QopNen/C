#include<stdio.h>
#include<string.h>
#define n 80
int isCir(char str[],int countS){
	for(int i=0;i<countS;i++){
		if(str[i]==str[countS-1-i]){
		}else{
			return 0;
		}
	}
	return 1;
}
int main(){
	char str[n];
	int countS,i=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){}
	countS=i;
	if(isCir(str,countS)==1){
		printf("�ǻ���"); 
	}else{
		printf("���ǻ���"); 
	}
}
