#include<stdio.h>
int main() {
    int n,i,j,k,t;
    printf("please input n:"); 
    scanf("%d",&n);
    printf("The possible Latin Squares of order %d are:\n",n);
    for(j=0;j<n;j++){//有几种可能 
        for(i=0;i<n;i++){//第i行的元素 
            t = (i+j)%n;//列的初始量 
            for(k=0;k<n;k++){
                printf("%d ",(k+t)%n+1);//按顺序输出第i行的元素（行的循环） 
            }
            printf("\n");
        }
        printf("\n");
    }
}
