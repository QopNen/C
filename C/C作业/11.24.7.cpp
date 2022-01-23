#include<stdio.h>
#include<math.h>
int CompareBig(int x,int y){
	if(x>=y){
		return x;
	}else{
		return y;
	}
}
int CompareSmall(int x,int y){
	if(x>=y){
		return y;
	}else{
		return x;
	}
}
int MaxCommonFactor(int x,int y){
	if(x==y){
		return x;
	}else{
		MaxCommonFactor(abs(x-y),CompareSmall(x,y));//根据提示 
	}
}
int main(){
	int a,b;
	printf("Input a,b:");
	scanf("%d%d",&a,&b);
	printf("MaxCommonFactor = %d",MaxCommonFactor(a,b));
}
