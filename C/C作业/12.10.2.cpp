#include<stdio.h>
#define SIZE 1024
int max(int num[],int n){//函数功能：找出最大元素的下标 
	int x=0;
	for(int i=0;i<n;i++){
		if(num[i]>=num[x]){
			x=i;
		}
	}
	return x;
}
int min(int num[],int n){//函数功能：找出最小元素的下标 
	int x=0;
	for(int i=0;i<n;i++){
		if(num[i]<=num[x]){
			x=i;
		}
	}
	return x;
}
int main(){
	int num[SIZE],*pa=num,n,t,maxN,minN;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d data:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	printf("\norigin: ");
	for(int i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	printf("\nmax=%d",num[max(num,n)]);
	printf("\nmin=%d",num[min(num,n)]);
	maxN=max(num,n);
	minN=min(num,n);
	printf("\n\nsorted:");
	t=num[0];
	num[0]=num[maxN];
	num[maxN]=t;
	t=num[n-1];
	num[n-1]=num[minN];
	num[minN]=t;
	for(int j=0;j<n;j++){
		printf("%d ",num[j]);
	}
}
