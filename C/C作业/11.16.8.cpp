#include<stdio.h>
int main(){
	int n,i,j;
	printf("请输入要打印的行数："); 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
