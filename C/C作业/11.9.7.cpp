#include<stdio.h>
int main(){
	int y,m,d,countD=0,febD=28;//y=年份，m=月份，d=日期，countD=总天数 
	printf("请输入年月日：");
	scanf("%d%d%d",&y,&m,&d);
	if(y%4==0){
		febD=29;
	}
    switch(m){
		case 1:{
			countD=d;
			break;
		}
		case 2:{
			countD=31+d;
			break;
		}
		case 3:{
            countD=31+febD+d;
		    break;
		}
		case 4:{
			countD=62+febD+d;
			break;
		}
		case 5:{
			countD=92+febD+d;
			break;
		}
		case 6:{
			countD=123+febD+d;
			break;
		}
		case 7:{
			countD=153+febD+d;
			break;
		}
		case 8:{
			countD=184+febD+d;
			break;
		}
		case 9:{
			countD=215+febD+d;
			break;
		}
		case 10:{
			countD=245+febD+d;
			break;
		}
		case 11:{
			countD=276+febD+d;
			break;
		}
		case 12:{
			countD=306+febD+d;
			break;
		}
		default:{
			printf("请输入正确的日期！"); 
			break;
		}
	}
	printf("这天是第%d天",countD);
}
