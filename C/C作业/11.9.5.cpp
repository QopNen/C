#include<stdio.h>
int main(){
	double h,w,t;
	printf("��������ߣ��ף������أ�ǧ�ˣ���"); 
	scanf("%lf%lf",&h,&w);
	t=w/(h*h);
	printf("������ָ��Ϊ%lf������",t);
    if(t<18){
    	printf("������"); 
	}else{
		if(t<25){
			printf("��������"); 
		}else{
			if(t<27){
				printf("��������");
			}else{
				printf("����");
			}
		}
	}
}
