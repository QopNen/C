#include<stdio.h>
int main() {
    int n,i,j,k,t;
    printf("please input n:"); 
    scanf("%d",&n);
    printf("The possible Latin Squares of order %d are:\n",n);
    for(j=0;j<n;j++){//�м��ֿ��� 
        for(i=0;i<n;i++){//��i�е�Ԫ�� 
            t = (i+j)%n;//�еĳ�ʼ�� 
            for(k=0;k<n;k++){
                printf("%d ",(k+t)%n+1);//��˳�������i�е�Ԫ�أ��е�ѭ���� 
            }
            printf("\n");
        }
        printf("\n");
    }
}
