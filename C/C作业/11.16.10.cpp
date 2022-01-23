#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	double x,j=1,n=1,sum=0,ns,nm=1,perN=1;
	int count=0;
	printf("please input x:");
	scanf("%lf",&x);
	while(fabs(perN)>=1e-5){
		printf("进入循环\n"); 
		nm=1;
		ns=2*n-1;
		j=ns;
		while(j>=1){
			nm=nm*j;
			j--;
		}
		perN=pow(-1,n+1)*pow(x,ns)/nm;
		sum=sum+perN;
		n++;
		count++;
	}
	printf("sin(%lf)=%lf\n",x,sum);
	printf("共%d项",count);
}
