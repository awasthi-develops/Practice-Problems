#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[20],ch;
	int st1=0,st2=0,i=0;
	printf("enter string\n");
	gets(s);
	int k=strlen(s);
	//printf("%d",k);
	if(s[k-3]=='c' && s[k-2]=='b' && s[k-1]=='a')
	{
	 while(i<k-3)
	 {
		ch=s[i++];
		if(ch=='a' || ch=='b')
		st1=0;
		else
		st2=1;
	 } 
	if(st1|st2==0)
	printf("string accepted under (a+b)*cba");
	else
	printf("string not accepted under (a+b)*cba");
    }
    else
    printf("string not accepted under (a+b)*cba");
    return 0;
}


