#include<stdio.h>
int main(){
	int y,m,d,countD=0,febD=28;//y=��ݣ�m=�·ݣ�d=���ڣ�countD=������ 
	printf("�����������գ�");
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
			printf("��������ȷ�����ڣ�"); 
			break;
		}
	}
	printf("�����ǵ�%d��",countD);
}
