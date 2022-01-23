#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Dice(void){
	scanf("%*c");
	int a,b;
	static int x=0;
	srand(time(0));
	a=rand()%6+1;
	b=rand()%6+1;
	printf("Player rolled %d + %d = %d\n",a,b,a+b);
	if(a+b==x){
		printf("Player wins");
		return 1;
	}
    if((a+b==7||a+b==11)&&x==0){
    	printf("Player wins\n");
    	return 1;
	}else if(x!=0&&a+b==7){
		printf("Player loses\n");
		return 0;
	}else if(x==0&&(a+b==4||a+b==5||a+b==6||a+b==8||a+b==9||a+b==10)){
		x=a+b;
		printf("Point is %d\n",a+b);
		Dice();
	}else if(x==0&&(a+b==2||a+b==3||a+b==12)){
		printf("Player loses\n");
		return 0;
	}else{
		Dice();
	}
}
int main(){
	Dice();
}
