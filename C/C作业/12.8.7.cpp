#include<stdio.h>
#include<string.h>
int countC(char str[1024]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			count++;
			for(;str[i]!=' ';i++){}
		}
	}
	return count;	
}
int main()
{
	char str[1024];
	//scanf("%s",str);
	gets(str);
    printf("%d",countC(str));
}
