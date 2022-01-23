#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	//1)
	struct part{
		int partNumber;
		char partName[25];
	};
	//2)
	typedef part Part;
	//3)
	Part a,b[10],*ptr;
	//4)
	scanf("%d",&a.partNumber);
	scanf("%s",&a.partName);
	//printf("\n%d",a.partNumber);
	//5)
	b[2]=a;
	//6)
	ptr=b;
	//7)
	printf("\n%d %s",(ptr+2)->partNumber,(ptr+2)->partName);
}
