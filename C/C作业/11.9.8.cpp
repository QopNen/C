#include<stdio.h>
#include<stdlib.h>
int main(){
	double a,b,c;
	int flag=1;
	printf("请输入三条边：");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b||a==c||b==c){
			printf("等腰");
			flag=0; 
		}
		if(abs(a*a+b*b-c*c)<=1e-4||abs(b*b+c*c-a*a)<=1e-4||abs(a*a+c*c-b*b)<=1e-4){
			printf("直角");
			flag=0; 
		}
		if(flag==1){
			printf("一般"); 
		}
		printf("三角形");
	}else{
		printf("不是三角形"); 
	}
}
