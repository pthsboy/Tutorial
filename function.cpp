#include<stdio.h>

int My_printf(int x){
	printf("面積為:%d平方公里\n",x);
	return x+100;
}

int main(){
	int a,b,c,R;
	scanf("%d %d",&a,&b);
	c=a*b;
	R=My_printf(c);
	printf("X或者說R的值為:%d\n",R);
	//return 0;
}
