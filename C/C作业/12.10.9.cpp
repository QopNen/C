#include <stdio.h>
#include<stdlib.h>
#define CLASS 3
#define STU 4
int FindMax(int *p, int m, int n, int *pRow, int *pCol);
int main()
{
	int score[CLASS][STU],i,j,maxScore,row,col;
	int *p=score[0],*pRow,*pCol;
	pRow=(int *)malloc(sizeof(int));
	pCol=(int *)malloc(sizeof(int));
	printf("Please enter score:\n");
	for (i=0; i<CLASS; i++)
	{
		for (j=0; j<STU; j++)
		{
				scanf("%d",&score[i][j]);     /*����ѧ���ɼ�*/
		}
	}
	/*������߷ּ���ѧ�����ڰ�ź�ѧ��*/
	printf("I'm here!");
	maxScore=FindMax(p,i,j,pRow,pCol);
	row=*pRow;
	col=*pCol;
	printf("\nmaxScore =%d, class =%d, number =%d\n",maxScore,row+1,col+1);
	free(pRow);
	free(pCol);
}

/*�������ܣ���������m��n�еĶ�ά������Ԫ�ص����ֵ����ָ�������ڵ������±�ֵ
������ڲ���������ָ�����p��ָ��һ����ά��������ĵ��е���
            ���ͱ���m����ά�������������
                ���ͱ���n����ά�������������
�������ڲ���������ָ�����pRow��ָ������Ԫ�����ֵ���ڵ���
                ����ָ�����pCol��ָ������Ԫ�����ֵ���ڵ���
��������ֵ������Ԫ�ص����ֵ
*/
int  FindMax(int *p, int m, int n, int *pRow, int *pCol)
{  
	int scoreX;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(scoreX<*(p+i*n+j)){
				scoreX=*(p+i*n+j);
				*pRow=i;
				*pCol=j;
			}
		}
	}
	//printf("\n�����ڣ���߷�%d\n",scoreX);
	return scoreX;
}
