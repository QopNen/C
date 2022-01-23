#include<stdio.h>
struct stuIn{
	char name[20];
	long number;
	double score1,score2;
};
void sortS(stuIn stuIn[],int n){
	int j,k;
	struct stuIn t;
	printf("对编号1的课程从高分到低分排序：\n");
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
	printf("\n两门课程平均分为：\n");
	printf("ave1=%.1lf,ave2=%.1lf\n",averS1,averS2);
	printf("两门课程均低于平均分的学生姓名和学号：\n");
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
		printf("没有找到符合条件的学生！\n");
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
	printf("最高分为：\n");
	printf("MaxScore=%.1lf,Name is %s,No=%ld,Score.No=%d",maxS,stuIn[j].name,stuIn[j].number,sNo);
}
int main(){
	int n;
	stuIn stuIn[45];
	printf("请输入学生人数：");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++){
		printf("请输入第%d个学生的姓名：",i+1);
		scanf("%s",&stuIn[i].name);
		printf("请输入第%d个学生的学号：",i+1);
		scanf("%ld",&stuIn[i].number);
		printf("请输入第%d个学生的第一门课程成绩：",i+1);
		scanf("%lf",&stuIn[i].score1);
		printf("请输入第%d个学生的第二门课程成绩：",i+1);
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
