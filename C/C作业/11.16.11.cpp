#include<stdio.h>
int main(){
	int i,j,flag=0,x;
	for(i=23;flag==0;i+=2){
		for(j=1,x=i;j<=4&&x>=11;j++){
			if((x+1)%(j+1)==0){
				x=x-(x+1)/(j+1);
			}else{
				x=0;//��ֹ�����if����������� 
				break;
			}
		}
		if(j==5&&x==11){
			printf("ԭ������׹���%d����",i);
			flag=1;
		}
	}
}
