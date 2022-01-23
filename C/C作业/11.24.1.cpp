#include<stdio.h>
#include<math.h>
 double hypotenuse(double x,double y){
 	double z;
 	z=sqrt(x*x+y*y);
	return z;
 }
 int main(){
 	double a,b;
 	for(int i=1;i<=3;i++){
	 printf("Enter the sides of the triangle:");
 	scanf("%lf%lf",&a,&b);
 	printf("Hypotenuse: %.1lf\n\n",hypotenuse(a,b));
	 }
 }
