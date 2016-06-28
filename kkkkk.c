#include<stdio.h>
#include<string.h>
int  main()
{char t;
char str[100]="t";
int i,j=0,temp;
printf("\n enter the string");
grts(str);
i=0;j=strlen(str)-1;
while(i<j)
{
t=str[i];
str[i]=str[j];
str[j]=t;
i++;
j--;
printf("\n reverse the string is %s",str)
return 0;
}
}
