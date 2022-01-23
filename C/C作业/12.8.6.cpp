#include<stdio.h>
#include<string.h>
void strcmpM(char c[5][80]){
	int i,j,k;
	char str[80];
	for(i=0;i<5;i++){
		k=i;
		for(j=0;j<5;j++){
			if(strcmp(c[k],c[j])>0){
				k=j;
			}
			if(k!=i){
				strcpy(str,c[k]);
				strcpy(c[k],c[i]);
				strcpy(c[i],str);
			}
		}
	}
	for(int t=4;t>=0;t--){
		printf("%s\n",c[t]);
	}
}

int main(){
	char c[5][80];
	for(int i=0;i<5;i++){
		scanf("%s",c[i]);
	}
	printf("\n"); 
	strcmpM(c);
}
