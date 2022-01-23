#include<stdio.h>
#include<math.h>
int main(){
	double n=1,s=0;
	for(n=1;n<=20;n++){
		s=s+pow(-1,n+1)*n/(3*n+3);
	}
	printf("ºÍÎª%lf",s);
} 
