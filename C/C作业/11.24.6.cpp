#include<stdio.h>
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
	if(CompareBig(x,y)%CompareSmall(x,y)==0){
		return CompareSmall(x,y);
	}else{
		MaxCommonFactor(CompareSmall(x,y),CompareBig(x,y)%CompareSmall(x,y));
	}
}
int main(){
	int a,b;
	printf("Input a,b:");
	scanf("%d%d",&a,&b);
	printf("MaxCommonFactor = %d",MaxCommonFactor(a,b));
} 
