#include<stdio.h>
#include<string.h>
int main()
{
	char a[1024];
	int n=0,i=0,count=0;
	printf("please input a[]\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			count++;
			for(;a[i]!=' ';i++)
			{
			}
		}
	}
    printf("%d",count);
}
