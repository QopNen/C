#include<stdio.h>
struct aduIn{
	char name[20];
	long number;
	struct birthday{
		long year;
		int month;
		int day;
	}bir;
};
typedef aduIn aIn; 
void rescBir(aIn *pAdu,int n){
	aIn aBir;
	int flag=1;
	printf("������Ҫ��ѯ�����ڣ��� �� �գ���");
	scanf("%ld%d%d",&aBir.bir.year,&aBir.bir.month,&aBir.bir.day);
	for(int i=0;i<n;i++){
		if(aBir.bir.year==(*(pAdu+i)).bir.year){
			if(aBir.bir.month==(*(pAdu+i)).bir.month){
				if(aBir.bir.day==(*(pAdu+i)).bir.day){
					printf("%d.%s %ld\n",i+1,(*(pAdu+i)).name,(*(pAdu+i)).number);
					flag=0;
				}
			}
		}
	}
	if(flag==1){
		printf("û������������յ�Ա����"); 
	}
}
int main(){
	int n,flag=0;
	aIn aduIn[100],*pAdu;
	char yon,cont;
	pAdu=aduIn;
	printf("������Ա��������");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++){
		printf("������Ա��������");
		scanf("%s",&aduIn[i].name);
		printf("������Ա�����ţ�");
		scanf("%ld",&aduIn[i].number);
		printf("������Ա�����գ��� �� �գ���");
		scanf("%ld%d%d",&aduIn[i].bir.year,&aduIn[i].bir.month,&aduIn[i].bir.day);
		printf("\n");
	}
	printf("�Ƿ��ѯԱ�����գ�y or n����");
	scanf("%*c%c",&yon);
	if(yon=='y'){
		while(flag==0){
		rescBir(aduIn,n);
		printf("�Ƿ������ѯ����y or n��");
		scanf("%*c%c",&cont);
		if(cont=='n'){
			flag=1;
		}
	}
	}
	
}
