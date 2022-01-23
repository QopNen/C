#include<stdio.h>
int main(){
	int x,y,z,a,b,c;
	printf("please input there numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b &&a<=c){
		x=a;
		if(b>=c){
			y=c;
			z=b;
		}else{
			y=b;
			z=c;
		}
	}else if(b<=a && b<=c){
		x=b;
		if(a>=c){
			z=a;
			y=c;
		}
	}else{
		x=c;
		if(a>=b){
			z=a;
			y=b;
		}
	}
	printf("small to big:%d %d %d",x,y,z);
} 
