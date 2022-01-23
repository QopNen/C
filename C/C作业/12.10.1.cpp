#include<stdio.h>
#define SIZE 10
int main(){
	//a)
	float numbers[SIZE]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	//b)
	float *nPtr;
	//c)
	int i;
	printf("用数组下标表示法打印：\t\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",numbers[i]);
	}
	//d)
	nPtr=numbers;
	nPtr=&numbers[0];
	//e)
	printf("\n用指针变量，指针表示法打印：\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",*(nPtr+i));
	}
	//f)
	printf("\n用数组名，指针表示法打印：\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",*(numbers+i));
	}
	//g)
	printf("\n用指针变量下标表示法打印：\t");
	for(i=0;i<SIZE;i++){
		printf("%.1f ",nPtr[i]);
	}
	//h)
	printf("\n\n数组下标表示法：\t\t\t%.1f",numbers[3]);
	printf("\n数组名作为指针的指针表示法：\t\t%.1f",*(numbers+3));
	printf("\n指针变量为下标的数组下标表示法：\t%.1f",nPtr[3]);
	printf("\n指针变量为指针的指针表示法：\t\t%.1f",*(nPtr+3));
	//i)
	printf("\n\nnPtr+8访问的地址是：\t%p",nPtr+8);
	printf("\n该地址存储的值是：\t%.1f",*(nPtr+8));
	//j)
	nPtr=&numbers[5];
	printf("\n\n当nPtr指向numbers[5]:");
	printf("\nnPtr-=4访问的地址是：\t%p",nPtr-=4);
	printf("\n该地址存储的值是：\t%.1f",*nPtr);
}
