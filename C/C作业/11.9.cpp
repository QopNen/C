#include <stdio.h>
int main(){
	int a;
	printf("please input the age:");
	scanf("%d",&a);
	switch(a)
	    {
	case 2 : printf("age:2,enter Lower class");break;
	case 3 : printf("age:3,enter Lower class");break;
	case 4 : printf("age:4,enter Middle class");break;
	case 5 : printf("age:5,enter Higher class");break;
	case 6 : printf("age:6,enter Higher class");break;
	default: printf("Your age is wrong!");;break;
        }
} 
