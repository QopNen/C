#include<stdio.h>
#include<math.h>
int Ckm(int i,int j){
	int m=i,k=j,mk=i-j,mj=1,kj=1,mkj=1,Ckm;
	while(m>=1){
		mj=mj*m;
		m--;
	}
	while(k>=1){
		kj=kj*k;
		k--;
	}
	while(mk>=1){
		mkj=mkj*mk;
		mk--;
	}
	Ckm=mj/(kj*mkj);
	return Ckm;
}
int main(){
	int m,k;
	printf("Please input m,k(m>=k>0):");
	scanf("%d%d",&m,&k);
	if(m>=k&&m>0&&k>0){
		printf("p=%d",Ckm(m,k));
	}else{
		printf("Data wrong!");
	}
}
