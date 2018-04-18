#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool isdelim(char ch1)
{
	if(ch1==' ' || ch1=='-' || ch1=='.' || ch1==','|| ch1==':'|| ch1==';'|| ch1=='/' || ch1=='{' || ch1=='}' || ch1=='(' || ch1==')' || ch1=='-' || ch1=='[' || ch1==']'
	|| ch1=='+' || ch1=='_' || ch1=='*')
	return true;
	else
	return false;
}
bool isconstant(char ch2)
{
	if(ch2=='0' || ch2=='1' || ch2=='2' || ch2=='3' || ch2=='4' || ch2=='5' || ch2=='6' || ch2=='7' || ch2=='8' || ch2=='9')
	return true;
	else
	return false;
}
bool isidentifier(char *c)
{
	if(isdelim(c[0])==true || isconstant(c[0])==true || isupper(c[0])==1)
	return false;
	else
	return true;
}
int main()
{
	char c[100],ch;
	int i,j,countk=0,countid=0;
	char keywords[6][10]={"int","char","static","struct","union","return"};
	FILE *fp;
	fp=fopen("compiler_d1.cpp","r");
	if(fp==NULL)
     {
      printf("nCannot open the file");
      return 0;            
     }
     while(!feof(fp))
     {
     	fgets(c,sizeof(c),fp);
     	puts(c);
     	for(i=0;i<6;i++)
     	if(strstr(c,keywords[i]))
     	countk++;
     	if(isidentifier(c)==true)
     	countid++;
     }
     printf("No of keywords: %d\n",countk);
     printf("No of identifiers: %d\n",countid);
     return 0;
}
