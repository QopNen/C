#include<stdio.h>
#define STU 5
#define COURSE 3
/* �������ܣ���ѧ��������˳�����ѧ����ѧ��
   ��������������������num�����ѧ��ѧ��
             ���ͱ���n�����ѧ������
		�����ͱ���x����Ŵ�����ѧ����ѧ��
   ��������ֵ���ҵ�ʱ������ѧ��ѧ����ѧ�������е��±�λ�ã����򷵻�ֵ-1
*/
int  Search(long num[], int n, long x){
	for(int i=0;i<n;i++){
		if(x==num[i]){
			return i;
		}
	}
}

/* �������ܣ� ��ӡ���α�����ڰ���ѧ����š����Ʒ������ֺܷ�ƽ����
   ���������� ����������num�����ѧ��ѧ��
				��������score�����ѧ���ɼ�
				���ͱ���n�����ѧ������
				��������sum�����ÿ��ѧ�����ܷ�
				ʵ������aver�����ÿ��ѧ����ƽ����
   ��������ֵ����
*/
void Print(long num[],int score[][COURSE],int n,int sum[],float aver[]){
	printf("����\tѧ��\tCourse1\tCourse2\tCourse3\t�ܷ�\tƽ����\t\n");
	for(int i=0;i<n;i++){
		printf("%d\t",i+1);
		printf("%ld\t",num[i]);
		for(int j=0;j<COURSE;j++){
			printf("%d\t",score[i][j]);
		}
		printf("%d\t",sum[i]);
		printf("%.2lf\t\n",aver[i]);
	}
}

/* �������ܣ����ֳܷɼ��ɸߵ����ų��ɼ�������
   ��������������������num�����ѧ��ѧ��
             ��������score�����ѧ���ɼ�
			���ͱ���n�����ѧ������
			��������sum�����ÿ��ѧ�����ܷ�
			ʵ������aver�����ÿ��ѧ����ƽ����
   ��������ֵ����
*/
void Sort(long num[],int score[][COURSE],int n,int sum[],float aver[]){
	long numD;
	int scoreD[COURSE],sumD,k;
	float averD;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(sum[j]>sum[i]){
				sumD=sum[j];
				sum[j]=sum[i];
				sum[i]=sumD;
				
				numD=num[j];
				num[j]=num[i];
				num[i]=numD;
				
				averD=aver[j];
				aver[j]=aver[i];
				aver[i]=averD;
				
				for(int k=0;k<COURSE;k++){
					scoreD[k]=score[j][k];
				    score[j][k]=score[i][k];
				    score[i][k]=scoreD[k];
				}
				
			}
		}
	}
}

/* �������ܣ�����ÿ��ѧ�����ֺܷ�ƽ����
   ���������� ��������score�����ѧ���ɼ�
			     ���ͱ���n�����ѧ������
		��������sum������õ���ÿ��ѧ�����ܷ�
				ʵ������aver������õ���ÿ��ѧ����ƽ����
   ��������ֵ����
*/
void GetSumAver(int score[][COURSE],int n,int sum[],float aver[]){
	for(int i=0;i<n;i++){
		sum[i]=score[i][0]+score[i][1]+score[i][2];
	}
	for(int i=0;i<n;i++){
		aver[i]=(float)sum[i]/COURSE;
	}
}

/* �������ܣ�����ĳ��ѧ����ĩ�������ſγ̳ɼ�
   ��������������������num�����ѧ��ѧ��
             ��������score�����ѧ���ɼ�
			    ���ͱ���n�����ѧ������
   ��������ֵ����
*/
void Input(long num[],int score[][COURSE],int n){
	printf("������ѧ����ɼ���\n");
	for(int i=0;i<n;i++){
		scanf("%ld%d%d%d",&num[i],&score[i][0],&score[i][1],&score[i][2]);
	}
}

int main(){
	long int num[STU],x;
	int score[STU][COURSE],n=STU,sum[STU];
	float aver[STU];
	Input(num,score,n);
	GetSumAver(score,n,sum,aver);
	Sort(num,score,n,sum,aver);
	Print(num,score,n,sum,aver);
	printf("������Ҫ���ҵ�ѧ����ţ�");
	scanf("%ld",&x);
	printf("%d",Search(num,n,x));
}
