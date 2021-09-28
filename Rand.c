#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
#include<time.h>
int main(){
	int max,min,LuckyNumber;
	printf("Please input your MinNumber:");
	scanf("%d",&min);
	printf("Please input your MaxNumber:");
	scanf("%d",&max);
	srand(time(NULL));
	LuckyNumber=rand()%(max-min+1)+min;
	printf("Your LuckyNumber is :%d\n",LuckyNumber);
}
