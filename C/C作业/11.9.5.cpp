#include<stdio.h>
int main(){
	double h,w,t;
	printf("请输入身高（米）和体重（千克）："); 
	scanf("%lf%lf",&h,&w);
	t=w/(h*h);
	printf("您的体指数为%lf，您是",t);
    if(t<18){
    	printf("低体重"); 
	}else{
		if(t<25){
			printf("正常体重"); 
		}else{
			if(t<27){
				printf("超重体重");
			}else{
				printf("肥胖");
			}
		}
	}
}
