#include<stdio.h>
#define SIZE 10
int main(){
	//a)
	float numbers[SIZE]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	//b)
	float *nPtr;
	//c)
	int i;
	printf("�������±��ʾ����ӡ��\t\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",numbers[i]);
	}
	//d)
	nPtr=numbers;
	nPtr=&numbers[0];
	//e)
	printf("\n��ָ�������ָ���ʾ����ӡ��\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",*(nPtr+i));
	}
	//f)
	printf("\n����������ָ���ʾ����ӡ��\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",*(numbers+i));
	}
	//g)
	printf("\n��ָ������±��ʾ����ӡ��\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",nPtr[i]);
	}
	//h)
	printf("\n\n�����±��ʾ����\t\t\t%.1f",numbers[3]);
	printf("\n��������Ϊָ���ָ���ʾ����\t\t%.1f",*(numbers+3));
	printf("\nָ�����Ϊ�±�������±��ʾ����\t%.1f",nPtr[3]);
	printf("\nָ�����Ϊָ���ָ���ʾ����\t\t%.1f",*(nPtr+3));
	//i)
	printf("\n\nnPtr+8���ʵĵ�ַ�ǣ�\t%p",nPtr+8);
	printf("\n�õ�ַ�洢��ֵ�ǣ�\t%.1f",*(nPtr+8));
	//j)
	nPtr=&numbers[5];
	printf("\n\n��nPtrָ��numbers[5]:");
	printf("\nnPtr-=4���ʵĵ�ַ�ǣ�\t%p",nPtr-=4);
	printf("\n�õ�ַ�洢��ֵ�ǣ�\t%.1f",*nPtr);
}
