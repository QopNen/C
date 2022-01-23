#include<stdio.h> 
#include<math.h>
int main(){
	double x;
	printf("please input an interger:");
	scanf("%lf",&x);
	if(x==0){
		printf("y=1");
	}else if(x<0){
		printf("y=%lf",-exp(x));
	}else{
		printf("y=%lf",exp(x));
	}
}
