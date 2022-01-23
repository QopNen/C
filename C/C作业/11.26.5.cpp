#include<stdio.h> 

int CommonFactors(int a,int b){
	static int x=a;
	int fac=x;
    if(a%x==0&&b%x==0){
    	x=x-1;
		return fac;
	}else{
		x=x-1;
		if(x==0){
			return -1;
		}else{
			CommonFactors(a,b);
		}
	}
}

int main()
{
	int sub,a,b;
	printf("Please input a and b:");
	scanf("%d%d",&a,&b);

	while((sub=CommonFactors(a, b)) > 0)
	{
		static int counter=1;
		printf("Common factor %d is %d\n",counter++,sub);
	}
	return 0;
}


