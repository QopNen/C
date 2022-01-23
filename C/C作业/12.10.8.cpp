#include<stdio.h>
#include<stdlib.h>
int FindMax(int score[],long num[],int n,long *pMaxNum){
	int *maxS=score;
	for(int i=0;i<n;i++){
		if(*maxS<=score[i]){
			maxS=&score[i];
			*pMaxNum=num[i];
		}
	}
	//printf("\n\n%ld\n",*pMaxNum);
	return *maxS;
}
int main(){
	int score[40],n;
	long num[40],*pMaxNum;
	pMaxNum=(long *)malloc(sizeof(long));
	printf("Please enter total number:");
	scanf("%d",&n);
	printf("Please enter the number and score:\n");
	for(int i=0;i<n;i++){
		scanf("%ld%d",&num[i],&score[i]);
	}
	printf("maxScore = %d, maxNum = ",FindMax(score,num,n,pMaxNum));
	printf("%ld",*pMaxNum);
	free(pMaxNum);
}
