#include<stdio.h>
#include<math.h>
int convertTolnt(char num[]){
	int i=0,countS=0,numR=0,d;
	if(num[0]=='-'){
		for(i=0;num[i]!='\0';i++){}
	    countS=i;
	    for(int j=1;j<countS;j++){
	    	d=(-1)*(num[j]-'0')*pow(10,countS-j-1);
			numR=numR+d;
		}
		return numR;
	}else{
		for(i=0;num[i]!='\0';i++){}
	    countS=i;
	    for(int j=0;j<countS;j++){
	    	d=(num[j]-'0')*pow(10,countS-j-1);
			numR=numR+d;
		}
		return numR;
	}
}
int main(){
	char num[30];
	scanf("%s",num);
	printf("%d",convertTolnt(num));
}
