#include<stdio.h>
int main(){
	double faHeight,moHeight,kidHeight,per=1;
	char sex,sports,diet;
	printf("�Ա�(F��ʾŮ�ԣ�M��ʾ����)��");
	scanf("%1c",&sex); 
	printf("�����븸ĸ����ߣ����ף���");
	scanf("%lf%lf",&faHeight,&moHeight);
	printf("�Ƿ�ϲ������������(Y��ʾ�ǣ�N��ʾ��)");
	scanf("%*c%c",&sports);
	printf("�Ƿ������õ���ʳϰ�ߣ�(Y��ʾ�ǣ�N��ʾ��)");
	scanf("%*c%c",&diet);
	if(sex=='F'){
		kidHeight=(faHeight*0.923+moHeight)/2;
	}else if(sex=='M'){
		kidHeight=(faHeight+moHeight)*0.54;
	}else{
		printf("�Ա��������"); 
	}
	if(sports=='Y'){
		per=per+0.02;
		if(diet=='Y'){
			per=per+0.015;
		}
	}else{
		if(diet=='Y'){
			per=per+0.015;
		}
	}
	printf("�ٷֱ�Ϊ%lf\n",per*100);
	kidHeight=kidHeight*per;
	printf("Ԥ�����Ϊ%lfcm",kidHeight);
} 
