#include<stdio.h>
#include<stdlib.h>
int main(){
	const char *p[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("Input month number:");
	scanf("%d",&n);
	printf("month %d is %s",n,p[n-1]);
}
