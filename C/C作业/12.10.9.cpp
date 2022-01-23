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
				scanf("%d",&score[i][j]);     /*输入学生成绩*/
		}
	}
	/*计算最高分及其学生所在班号和学号*/
	printf("I'm here!");
	maxScore=FindMax(p,i,j,pRow,pCol);
	row=*pRow;
	col=*pCol;
	printf("\nmaxScore =%d, class =%d, number =%d\n",maxScore,row+1,col+1);
	free(pRow);
	free(pCol);
}

/*函数功能：计算任意m行n列的二维数组中元素的最大值，并指出其所在的行列下标值
函数入口参数：整型指针变量p，指向一个二维整型数组的第行第列
            整型变量m，二维整型数组的行数
                整型变量n，二维整型数组的列数
函数出口参数：整型指针变量pRow，指向数组元素最大值所在的行
                整型指针变量pCol，指向数组元素最大值所在的列
函数返回值：数组元素的最大值
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
	//printf("\n函数内：最高分%d\n",scoreX);
	return scoreX;
}
