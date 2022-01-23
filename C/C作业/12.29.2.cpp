#include<stdio.h>
#include<stdlib.h>
int main(){
	struct stuData{
		char Name[50];
		char Sex;
		int Age;
		double Score;
	};
	stuData stu[45],maxStu;
	int n;
	printf("请输入学生人数：");
	scanf("%d",&n); 
	printf("\n");
	for(int i=0;i<n;i++){
		printf("请输入第%d个学生的姓名：",i+1);
		scanf("%s",&stu[i].Name);
		printf("请输入第%d个学生的性别（F or M）:",i+1);
		scanf("%*c%c",&stu[i].Sex);
		printf("请输入第%d个学生的年龄：",i+1);
		scanf("%d",&stu[i].Age);
		printf("请输入第%d个学生的成绩：",i+1);
		scanf("%lf",&stu[i].Score);
		printf("\n");
		if(i==0){
			maxStu=stu[i];
		}else{
			if(maxStu.Score<=stu[i].Score){
				maxStu=stu[i];
			}
		}
	}
	printf("Name\tSex\tAge\tScore\n");
	printf("%s\t%c\t%d\t%.1lf",maxStu.Name,maxStu.Sex,maxStu.Age,maxStu.Score);
}
