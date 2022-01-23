#include<stdio.h>
int main(){
	double faHeight,moHeight,kidHeight,per=1;
	char sex,sports,diet;
	printf("性别(F表示女性，M表示男性)：");
	scanf("%1c",&sex); 
	printf("请输入父母的身高（厘米）：");
	scanf("%lf%lf",&faHeight,&moHeight);
	printf("是否喜爱体育锻炼？(Y表示是，N表示否)");
	scanf("%*c%c",&sports);
	printf("是否有良好的饮食习惯？(Y表示是，N表示否)");
	scanf("%*c%c",&diet);
	if(sex=='F'){
		kidHeight=(faHeight*0.923+moHeight)/2;
	}else if(sex=='M'){
		kidHeight=(faHeight+moHeight)*0.54;
	}else{
		printf("性别输入错误！"); 
	}
	if(sports=='Y'){
		per=per+0.02;
		if(diet=='Y'){
			per=per+0.015;
		}
	}else{
		if(diet=='Y'){
			per=per+0.015;
		}
	}
	printf("百分比为%lf\n",per*100);
	kidHeight=kidHeight*per;
	printf("预计身高为%lfcm",kidHeight);
} 
