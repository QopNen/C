#include<stdio.h>
#include<math.h>
void timeX(int x,int y){
	int a,b;
	if(fabs(x)>=fabs(y)){
		a=x;
		b=y;
	}else{
		a=y;
		b=x;
	}
	if(a%b==0){
		printf("%d is a multiple of %d\n\n",a,b);
	}else{
		printf("%d is not a multiple of %d\n\n",a,b);
	}
}
int main(){
	int a,b;
	for(int i=1;i<=3;i++){
		printf("Enter two integers:");
		scanf("%d%d",&a,&b);
		timeX(a,b);
	}
}
