#include<stdio.h>
#define STU 5
#define COURSE 3
/* 函数功能：在学号数组中顺序查找学生的学号
   函数参数：长整型数组num，存放学生学号
             整型变量n，存放学生人数
		长整型变量x，存放待查找学生的学号
   函数返回值：找到时，返回学生学号在学号数组中的下标位置，否则返回值-1
*/
int  Search(long num[], int n, long x){
	for(int i=0;i<n;i++){
		if(x==num[i]){
			return i;
		}
	}
}

/* 函数功能： 打印名次表，表格内包括学生编号、各科分数、总分和平均分
   函数参数： 长整型数组num，存放学生学号
				整型数组score，存放学生成绩
				整型变量n，存放学生人数
				整型数组sum，存放每个学生的总分
				实型数组aver，存放每个学生的平均分
   函数返回值：无
*/
void Print(long num[],int score[][COURSE],int n,int sum[],float aver[]){
	printf("名次\t学号\tCourse1\tCourse2\tCourse3\t总分\t平均分\t\n");
	for(int i=0;i<n;i++){
		printf("%d\t",i+1);
		printf("%ld\t",num[i]);
		for(int j=0;j<COURSE;j++){
			printf("%d\t",score[i][j]);
		}
		printf("%d\t",sum[i]);
		printf("%.2lf\t\n",aver[i]);
	}
}

/* 函数功能：按总分成绩由高到低排出成绩的名次
   函数参数：长整型数组num，存放学生学号
             整型数组score，存放学生成绩
			整型变量n，存放学生人数
			整型数组sum，存放每个学生的总分
			实型数组aver，存放每个学生的平均分
   函数返回值：无
*/
void Sort(long num[],int score[][COURSE],int n,int sum[],float aver[]){
	long numD;
	int scoreD[COURSE],sumD,k;
	float averD;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(sum[j]>sum[i]){
				sumD=sum[j];
				sum[j]=sum[i];
				sum[i]=sumD;
				
				numD=num[j];
				num[j]=num[i];
				num[i]=numD;
				
				averD=aver[j];
				aver[j]=aver[i];
				aver[i]=averD;
				
				for(int k=0;k<COURSE;k++){
					scoreD[k]=score[j][k];
				    score[j][k]=score[i][k];
				    score[i][k]=scoreD[k];
				}
				
			}
		}
	}
}

/* 函数功能：计算每个学生的总分和平均分
   函数参数： 整型数组score，存放学生成绩
			     整型变量n，存放学生人数
		整型数组sum，计算得到的每个学生的总分
				实型数组aver，计算得到的每个学生的平均分
   函数返回值：无
*/
void GetSumAver(int score[][COURSE],int n,int sum[],float aver[]){
	for(int i=0;i<n;i++){
		sum[i]=score[i][0]+score[i][1]+score[i][2];
	}
	for(int i=0;i<n;i++){
		aver[i]=(float)sum[i]/COURSE;
	}
}

/* 函数功能：输入某班学生期末考试三门课程成绩
   函数参数：长整型数组num，存放学生学号
             整型数组score，存放学生成绩
			    整型变量n，存放学生人数
   函数返回值：无
*/
void Input(long num[],int score[][COURSE],int n){
	printf("请输入学号与成绩：\n");
	for(int i=0;i<n;i++){
		scanf("%ld%d%d%d",&num[i],&score[i][0],&score[i][1],&score[i][2]);
	}
}

int main(){
	long int num[STU],x;
	int score[STU][COURSE],n=STU,sum[STU];
	float aver[STU];
	Input(num,score,n);
	GetSumAver(score,n,sum,aver);
	Sort(num,score,n,sum,aver);
	Print(num,score,n,sum,aver);
	printf("请输入要查找的学生编号：");
	scanf("%ld",&x);
	printf("%d",Search(num,n,x));
}
