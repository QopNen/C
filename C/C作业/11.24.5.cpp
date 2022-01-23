#include<stdio.h>
int Compare(int x,int y){
	if(x>=y){
		return x;
	}else{
		return y;
	}
	
}
int MinCommonMultiple(int x,int y){
	int flag=1,mcm;
	for(int i=Compare(x,y);flag==1;i++){
		if(i%x==0&&i%y==0){
			mcm=i;
			flag=0;
		}
	}
	return mcm;
}
int main(){
	int a,b;
	printf("Input a,b:");
	scanf("%d%d",&a,&b);
	printf("MinCommonMultiple = %d",MinCommonMultiple(a,b));
}
