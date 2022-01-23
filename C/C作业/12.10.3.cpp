#include<stdio.h>
#include<string.h>
int main(){
	char str[20],*pStr=str;
	int n,m,len,flag=1;
	printf("Please input a string.\n");
	printf("The string can store 20 character:");
	gets(str);
	len=strlen(str);
    while(flag==1){
    	printf("Input n,m(n+m<=%d):",len);
		scanf("%d%d",&n,&m);
    	if(n+m<=len){
    		flag=0;
		}
	}
	for(int i=0;i<m;i++){
		printf("%c",*pStr+n+i);
	}
} 
