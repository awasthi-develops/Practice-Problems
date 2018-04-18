#include<stdio.h>
#include<string.h>
int main()
{
int t,n,m;
scanf("%d",&t);
while(t--)
 {
 	int i=0;
char s1[4][11];
char s2[4][11];
for(n=0;n<4;n++)
scanf("%s",s1[n]);
for(m=0;m<4;m++)
scanf("%s",s2[m]);
//scanf("%s\t%s\t%s\t%s",s1[0],s1[1],s1[2],s1[3]);
//scanf("%s\t%s\t%s\t%s",s2[0],s2[1],s2[2],s2[3]);
for(n=0;n<4;n++)
 {
 for(m=0;m<4;m++)
  {
   if(strcmp(s1[n],s2[m])==0)
   i++;
  }
}
  if(i<2)
  printf("dissimilar\n");
  else
  printf("similar\n");
   
 }
 return 0;
}
