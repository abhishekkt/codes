#include<stdio.h>
#include<string.h>
const char *sort(char *c)
{ char temp;
		int len = strlen(c);
	printf("%d\n",len);
	int i,j;
	for(i=0;i<len-1;i++)	
	{
		for(j=0;j<len-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp = c[j];
				c[j] = c[j+1];
				c[j+1] =temp;
			}
		}
	}
	return c;
}
int main()
{
	char c[100],d[100],temp;
	printf("enter a string ");
	scanf("%s",c);
	printf("enter another string ");
	scanf("%s",d);
	int a = strcmp(sort(c),sort(d));
	if (a==0)
	{
		printf("anagrams\n");
	}
	else
	{
		printf("not a anagram\n");
	}
}
