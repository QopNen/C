#include<stdio.h>
int main(){
	int count=0,i=1,j=1,t=1;
	for(i=1;i<11;i++){
		t=1;
		j=i;
		printf("\nj=%d",j);
		printf("\nt=1");
		while(j>=1){
			t=t*j;
		    printf("*%d",j);
			j--;
			}
		printf("\n");
		printf("t=%d",t);
		count=count+t;
	}
	printf("\n½á¹ûÊÇ%d",count);
}
