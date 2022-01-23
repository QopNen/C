#include<stdio.h>
int main(){
	int n=5,i,j,k;
	for(i=n;i>=1;i--){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",i);
		}
		printf("\n");
	}
}
