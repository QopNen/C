#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
struct Competition {
     char    competitionName[20];          // 竞赛名称     
	 int     maxAge;                       // 报名学生年龄上限 
	 int     minAge;                       // 报名学生最小年龄 
	 int     count;                        // 报名学生总人数     
	 char    *studentName[20];             // 报名学生们的姓名，指针数组 
}; 
// 创建竞赛 
void createCompetition(struct Competition *com,int comCount){
	int c;
	printf("请输入竞赛相关信息\n");
	printf("竞赛名称：");
	scanf("%*c");
	gets(((com+comCount)->competitionName));
	printf("最大年龄：");
	scanf("%d",&((com+comCount)->maxAge)); 
	(com+comCount)->count=0;
	(com+comCount)->minAge=(com+comCount)->maxAge;
	printf("竞赛 %s 创建成功",(com+comCount)->competitionName);
} 
// 学生报名 
void studentRegistration(struct Competition *com){
	int number,age;
	char name[20];
	printf("请输入学生相关信息\n");
	printf("报名竞赛数组编号：");
	scanf("%d",&number);
	printf("年龄：");
	scanf("%d",&age);
	printf("姓名：");
	scanf("%s",name); 
	if(age<=(com+number)->maxAge){
		(com+number)->studentName[(com+number)->count]=name;
		//printf("%s",(com+number)->studentName[(com+number)->count]);
		(com+number)->count++;
		printf("报名参加竞赛 %s 成功",(com+number)->competitionName);
		if(age<=(com+number)->minAge){
			(com+number)->minAge=age;
		}
	}else{
		printf("报名参加竞赛 %s 失败，年龄不符合要求",(com+number)->competitionName);
		return;
	}
}
// 查阅竞赛信息 
void competitionInfo(struct Competition *com){
	int number;
	printf("请输入查阅竞赛相关信息\n");
	printf("竞赛数组编号："); 
	scanf("%d",&number);
	printf("查阅竞赛基本信息如下\n");
	printf("竞赛名称： %s\n",(com+number)->competitionName);
	printf("最大年龄： %d\n",(com+number)->maxAge);
	printf("最小年龄： %d\n",(com+number)->minAge);
	printf("报名学生数量： %d\n",(com+number)->count);
	printf("报名学生姓名：");
	for(int i=0;i<((com+number)->count);i++){
		printf("%s ",(com+number)->studentName[i]);
	}
}
int main() {
    struct Competition compet[20];
	int count = 0,op;
	while(1){
		printf("\n操作提示：1-创建竞赛；2-学生报名；3-查阅竞赛信息\n"); 
        printf("请输入操作：");
		scanf("%d",&op);         
		if(op == 1){
		    if(count < 20){                 
				createCompetition(compet,count);                 
				count++;
			}else printf("竞赛数量已经超出上限，无法再新创建。"); 
        }          
		if(op == 2)studentRegistration(compet);
		if(op == 3)competitionInfo(compet);            
	}
	return 0;
} 
