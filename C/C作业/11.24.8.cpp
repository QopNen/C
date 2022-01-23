#include<stdio.h>
int prime(int x){
	int i=2;
	for(i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return i;
}
void Goldbach(int x){
	for(int i=2;i<x/2;i++){
		if(prime(i)!=0){
		if(prime(x-i)!=0){
			printf("%d=%d+%d\n",x,i,x-i);		
            }
		}
	}
} 
int main(){
	int x;
	printf("Please input an even number which is bigger than 6:");
	scanf("%d",&x);
	if(x>6&&x%2==0){
		Goldbach(x);
	}else{
		printf("Data wrong!");
	}
}
