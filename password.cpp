#include<stdio.h>
#include<string.h>

int main(){
	char s[80];
	int i;
	scanf("%s",s);
	if(s[0]=='+'){
		for(i=1;i<strlen(s);i++){
			s[i]=s[i]+3;
			if(s[i]>'z'){
				s[i]=s[i]-26;
			}
		}
	}
	if(s[0]=='-'){
		for(i=1;i<strlen(s);i++){
			s[i]=s[i]-3;
			if(s[i]<'a'){
				s[i]=s[i]+26;
			}
		}
	}
	printf("%s",s+1);
} 
