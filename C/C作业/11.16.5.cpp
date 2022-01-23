#include<stdio.h>
int main(){
	double mS=1000/(1+12*0.0063);
	for(int i=1;i<=4;i++){
		mS=(mS+1000)/(1+12*0.0063);
	}
	printf("Òª´æ%.2lfÔª",mS);
}
