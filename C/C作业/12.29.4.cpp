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
	printf("请输入要查询的日期（年 月 日）：");
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
		printf("没有在这天过生日的员工！"); 
	}
}
int main(){
	int n,flag=0;
	aIn aduIn[100],*pAdu;
	char yon,cont;
	pAdu=aduIn;
	printf("请输入员工数量：");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++){
		printf("请输入员工姓名：");
		scanf("%s",&aduIn[i].name);
		printf("请输入员工工号：");
		scanf("%ld",&aduIn[i].number);
		printf("请输入员工生日（年 月 日）：");
		scanf("%ld%d%d",&aduIn[i].bir.year,&aduIn[i].bir.month,&aduIn[i].bir.day);
		printf("\n");
	}
	printf("是否查询员工生日（y or n）：");
	scanf("%*c%c",&yon);
	if(yon=='y'){
		while(flag==0){
		rescBir(aduIn,n);
		printf("是否继续查询？（y or n）");
		scanf("%*c%c",&cont);
		if(cont=='n'){
			flag=1;
		}
	}
	}
	
}
