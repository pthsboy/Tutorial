#include<stdio.h>

int My_printf(int x){
	printf("���n��:%d���褽��\n",x);
	return x+100;
}

int main(){
	int a,b,c,R;
	scanf("%d %d",&a,&b);
	c=a*b;
	R=My_printf(c);
	printf("X�Ϊ̻�R���Ȭ�:%d\n",R);
	//return 0;
}
