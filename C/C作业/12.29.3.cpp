#include<stdio.h>
struct stuIn{
	char name[20];
	long number;
	double score1,score2;
};
void sortS(stuIn stuIn[],int n){
	int j,k;
	struct stuIn t;
	printf("�Ա��1�Ŀγ̴Ӹ߷ֵ��ͷ�����\n");
	printf("Name\tNo\tScore1\tScore2\n");
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(stuIn[i].score1<stuIn[j].score1){
				t=stuIn[i];
				stuIn[i]=stuIn[j];
				stuIn[j]=t;
			}
		}
		printf("%s\t%ld\t%.1lf\t%.1lf\n",stuIn[i].name,stuIn[i].number,stuIn[i].score1,stuIn[i].score2);
	}
}
void averS(stuIn stuIn[],int n){
	double countS1=0,countS2=0,averS1=0,averS2=0;
	int flag=0;
	for(int i=0;i<n;i++){
		countS1+=stuIn[i].score1;
		countS2+=stuIn[i].score2;
	}
	averS1=countS1/n;
	averS2=countS2/n;
	printf("\n���ſγ�ƽ����Ϊ��\n");
	printf("ave1=%.1lf,ave2=%.1lf\n",averS1,averS2);
	printf("���ſγ̾�����ƽ���ֵ�ѧ��������ѧ�ţ�\n");
	printf("Name\tNo\n");
	for(int i=0;i<n;i++){
		if(stuIn[i].score1<averS1){
			if(stuIn[i].score2<averS2){
				printf("%s\t%ld\n",stuIn[i].name,stuIn[i].number);
				flag=0;
			}
		}
	}
	if(flag==1){
		printf("û���ҵ�����������ѧ����\n");
	}
}
void bestStu(stuIn stuIn[],int n){
	double maxS=0;
	int j=0,sNo=0;
	for(int i=0;i<n;i++){
		if(stuIn[i].score1>=maxS){
			maxS=stuIn[i].score1;
			j=i;
			sNo=1;
		}
		if(stuIn[i].score2>=maxS){
			maxS=stuIn[i].score2;
			j=i;
			sNo=2;
		}
	}
	printf("��߷�Ϊ��\n");
	printf("MaxScore=%.1lf,Name is %s,No=%ld,Score.No=%d",maxS,stuIn[j].name,stuIn[j].number,sNo);
}
int main(){
	int n;
	stuIn stuIn[45];
	printf("������ѧ��������");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++){
		printf("�������%d��ѧ����������",i+1);
		scanf("%s",&stuIn[i].name);
		printf("�������%d��ѧ����ѧ�ţ�",i+1);
		scanf("%ld",&stuIn[i].number);
		printf("�������%d��ѧ���ĵ�һ�ſγ̳ɼ���",i+1);
		scanf("%lf",&stuIn[i].score1);
		printf("�������%d��ѧ���ĵڶ��ſγ̳ɼ���",i+1);
		scanf("%lf",&stuIn[i].score2);
		printf("\n");
	}
	printf("Name\tNo\tScore1\tScore2\n");
	for(int i=0;i<n;i++){
		printf("%s\t%ld\t%.1lf\t%.1lf\n",stuIn[i].name,stuIn[i].number,stuIn[i].score1,stuIn[i].score2);
	}
	printf("\n");
	bestStu(stuIn,n);
	averS(stuIn,n);
	sortS(stuIn,n);
}
