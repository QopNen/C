#include<stdio.h>
int divide(int n){
	if(n<60){
		return 0;
	}else if(n>=60&&n<70){
		return 1;
	}else if(n>=70&&n<80){
		return 2;
	}else if(n>=80&&n<90){
		return 3;
	}else if(n>=90&&n<100){
		return 4;
	}else if(n==100){
		return 5;
	}
}

int main(){
	int score[30],num[30],a,flag=1,countStu=0,i=0,failC=0,i1,scoreC=0,aver,averC=0;
	int stu[6]={0,0,0,0,0,0};
	double per[6]={0,0,0,0,0,0};
	printf("Please enter num and score until score<0:\n"); 
	for(i=0;flag==1;i++){
		printf("%d ",i+1);
		scanf("%d",&a);
		if(a>0){
			score[i]=a;
		}else{
			flag=0;
		}
	}
	countStu=i-1;
	printf("Total student = %d\n",countStu);
	printf("Fail:\nnumber--score\n");
	for(int j=0;j<countStu;j++){
		if(score[j]<60){
			printf("%d------%d\n",j+1,score[j]);
			failC++;
		}
	}
	printf("Fail students = %d\n",failC);
	for(int k=0;k<countStu;k++){
		scoreC=scoreC+score[k];
	}
	aver=scoreC/countStu;
	printf("aver = %d\nAbove aver:\nnumber--score\n",aver);
	for(int t=0;t<countStu;t++){
		if(score[t]>=aver){
			printf("%d-------%d\n",t+1,score[t]);
			averC++;
		}
	}
	printf("Above aver students = %d\n",averC);
	printf("score\tnumber\tpercent\t\n");
	for(int o=0;o<countStu;o++){
		stu[divide(score[o])]++;
	}
	for(int p=0;p<countStu;p++){
		per[p]=((double)stu[p]/(double)countStu)*100;
	}
	printf("< 60\t%d\t%lf\n",stu[0],per[0]);
	printf("60--69\t%d\t%lf\n",stu[1],per[1]);
	printf("70--79\t%d\t%lf\n",stu[2],per[2]);
	printf("80--89\t%d\t%lf\n",stu[3],per[3]);
	printf("90--99\t%d\t%lf\n",stu[4],per[4]);
	printf("100\t%d\t%lf\n",stu[5],per[5]);
} 
