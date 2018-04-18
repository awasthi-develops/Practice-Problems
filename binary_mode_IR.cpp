#include<stdio.h>
#include<string.h>
int main()
{
	char key[2][10]={"int","while"};
	int i,j,st1=0,st2=0;
	//for(i=0;i<2;i++)
	//scanf("%s",key[i][10]);
	FILE *fp;
	char str[100];
	fp=fopen("c:/users/divyanshi/desktop/test1.txt","r");
	if(fp==NULL)
	{
		printf("cannot open the file");
		return 0;
	}
	while(!feof(fp))
	{
		fgets(str,sizeof(str),fp);
		puts(str);
		if(strstr(str,key[0]))
		st1=1;
		if(strstr(str,key[1]))
		st2=1;
	}
	if(st1&st2==1)
	printf("both string present");
	else
	printf("both string not present together");
	return 0;
}
