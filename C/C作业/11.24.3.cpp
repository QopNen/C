#include<stdio.h>
#include<math.h>
double CalculateCharges(double x){
	double charge;
	if(x<=3){
		charge=2;
	}else{
		charge=(ceil(x)-3)*0.5+2;
		if(charge>=10){
			charge=10;
		}
	}
	return charge;
}
int main(){
	double H[2],Hz=0,Cz=0;
	printf("Enter the hours parked for 3 cars:");
	scanf("%lf%lf%lf",&H[0],&H[1],&H[2]);
	printf("Car\tHours\tCharge\t\n");
	for(int i=1;i<=3;i++){
		printf("%d\t%.1lf\t%.1lf\t\n",i,H[i-1],CalculateCharges(H[i-1]));
		Hz+=H[i-1];
		Cz+=CalculateCharges(H[i-1]);
	}
	printf("TOTAL\t%.1lf\t%.1lf",Hz,Cz);
}
