#include<stdio.h>
void Donation(void) {
	static  double count=0;
	double money;
	printf("Enter donation amount <0 or less to exit>: ");
	scanf("%lf",&money);
	count=count+0.83*money;
	printf("After expenses:\t$%.2lf\n",0.83*money);
	printf("Total raised:\t$%.2lf\n",count);
	Donation();
}
int main(){
	Donation();
}
