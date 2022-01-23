#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void FindMaxMin(int num[], int n, int *pMax, int *pMaxPos, int *pMin, int *pMinPos){
	for(int i=0;i<n;i++){
		if(num[i]>=*pMax){
			//printf("更大！\n");
			pMax=&num[i];
			*pMaxPos=i;
		}
	}
	for(int j=0;j<n;j++){
		if(num[j]<=*pMin){
			//printf("更小！\n") ;
			pMin=&num[j];
			*pMinPos=j;
		}
	}
	printf("Max=%d, Position=%d, Min=%d, Position=%d",*pMax,*pMaxPos,*pMin,*pMinPos);
} 
int main(){
	int num[10],n=10,*pMax,*pMaxPos,*pMin,*pMinPos;
	int numX[10]={0,1,2,3,4,5,6,7,8,9};
	pMax=num;
	pMin=num;
	pMinPos=(int *)malloc(sizeof(int));
	pMaxPos=(int *)malloc(sizeof(int));
	printf("Input 10 numbers:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	FindMaxMin(num,n,pMax,pMaxPos,pMin,pMinPos);
	free(pMaxPos);
	free(pMinPos);
} 
