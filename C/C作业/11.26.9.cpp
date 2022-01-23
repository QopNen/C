#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Compute(void){
	static int score=0;
	srand(time(NULL));
	int a=rand()%10+1,b=rand()%10+1;
	int ax=rand()%4+1;
	int x;
	switch(ax){
		case 1:{
			printf("%d+%d=",a,b);
			scanf("%d",&x);
			if(x==a+b){
				score=score+10;
				printf("Right!");
				return score;
			}else{
				printf("Not correct!");
				return score;
			}
			break;
		}
		case 2:{
			printf("%d-%d=",a,b);
			scanf("%d",&x);
			if(x==a-b){
				score=score+10;
				printf("Right!");
				return score;
			}else{
				printf("Not correct!");
				return score;
			}
			break;
		}
		case 3:{
			printf("%d*%d=",a,b);
			scanf("%d",&x);
			if(x==a*b){
				score=score+10;
				printf("Right!");
				return score;
			}else{
				printf("Not correct!");
				return score;
			}
			break;
		}
		case 4:{
			printf("%d/%d=",a,b);
			scanf("%d",&x);
			if(x==a/b){
				score=score+10;
				printf("Right!");
				return score;
			}else{
				printf("Not correct!");
				return score;
			}
			break;
		}
   }
}
int main(){
	for(int i=0;i<9;i++){
		Compute();
		printf("\n");
	}
	printf("×ÜµÃ·Ö£º%d",Compute());
}
