#include<stdio.h>
#include<math.h>
int main(){
	double s=0,n=1;
	while((1/n)>=1e-4){
		s=s+pow(-1,n+1)*1/n;
		n++;
	}
	printf("½á¹ûÊÇ%lf",s);
}
