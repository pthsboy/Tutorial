#include<stdio.h> 
#include<stdlib.h>

int main(){
	int c,a,b=1911;
	printf("Please input year in AD:");
	scanf("%d",&a);
	c=a-b;
	printf("AD %d is ROC %d.\n",a,c);
	system("pause");
	return 0;
}
