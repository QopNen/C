#include<stdio.h>
void MyStrcat(char dstStr[],char srcStr[]){
	int countDS,countSS,i=0,j=0;
	for(i=0;dstStr[i]!='\0';i++){}
	countDS=i;
	for(j=0;srcStr[j]!='\0';j++){}
	countSS=j;
	for(int k=0;k<countSS;k++){
		dstStr[countDS+k]=srcStr[k];
	}
}
int main(){
	char dstStr[6]="Hello",srcStr[6]="World";//ÒÔhelloworldÎªÀý 
	MyStrcat(dstStr,srcStr);
	printf("%s",dstStr);
}


