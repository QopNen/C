#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
struct Competition {
     char    competitionName[20];          // ��������     
	 int     maxAge;                       // ����ѧ���������� 
	 int     minAge;                       // ����ѧ����С���� 
	 int     count;                        // ����ѧ��������     
	 char    *studentName[20];             // ����ѧ���ǵ�������ָ������ 
}; 
// �������� 
void createCompetition(struct Competition *com,int comCount){
	int c;
	printf("�����뾺�������Ϣ\n");
	printf("�������ƣ�");
	scanf("%*c");
	gets(((com+comCount)->competitionName));
	printf("������䣺");
	scanf("%d",&((com+comCount)->maxAge)); 
	(com+comCount)->count=0;
	(com+comCount)->minAge=(com+comCount)->maxAge;
	printf("���� %s �����ɹ�",(com+comCount)->competitionName);
} 
// ѧ������ 
void studentRegistration(struct Competition *com){
	int number,age;
	char name[20];
	printf("������ѧ�������Ϣ\n");
	printf("�������������ţ�");
	scanf("%d",&number);
	printf("���䣺");
	scanf("%d",&age);
	printf("������");
	scanf("%s",name); 
	if(age<=(com+number)->maxAge){
		(com+number)->studentName[(com+number)->count]=name;
		//printf("%s",(com+number)->studentName[(com+number)->count]);
		(com+number)->count++;
		printf("�����μӾ��� %s �ɹ�",(com+number)->competitionName);
		if(age<=(com+number)->minAge){
			(com+number)->minAge=age;
		}
	}else{
		printf("�����μӾ��� %s ʧ�ܣ����䲻����Ҫ��",(com+number)->competitionName);
		return;
	}
}
// ���ľ�����Ϣ 
void competitionInfo(struct Competition *com){
	int number;
	printf("��������ľ��������Ϣ\n");
	printf("���������ţ�"); 
	scanf("%d",&number);
	printf("���ľ���������Ϣ����\n");
	printf("�������ƣ� %s\n",(com+number)->competitionName);
	printf("������䣺 %d\n",(com+number)->maxAge);
	printf("��С���䣺 %d\n",(com+number)->minAge);
	printf("����ѧ�������� %d\n",(com+number)->count);
	printf("����ѧ��������");
	for(int i=0;i<((com+number)->count);i++){
		printf("%s ",(com+number)->studentName[i]);
	}
}
int main() {
    struct Competition compet[20];
	int count = 0,op;
	while(1){
		printf("\n������ʾ��1-����������2-ѧ��������3-���ľ�����Ϣ\n"); 
        printf("�����������");
		scanf("%d",&op);         
		if(op == 1){
		    if(count < 20){                 
				createCompetition(compet,count);                 
				count++;
			}else printf("���������Ѿ��������ޣ��޷����´�����"); 
        }          
		if(op == 2)studentRegistration(compet);
		if(op == 3)competitionInfo(compet);            
	}
	return 0;
} 
