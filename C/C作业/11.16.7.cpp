#include<stdio.h>
#include<math.h>
int main(){
	int a,b,h;
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			if(a!=b){
				h=a*1100+b*11;
				if(sqrt(h)==(int)sqrt(h)){
					printf("³µÅÆºÅÊÇ%d",h);
				}
			}
		}
	}
}
