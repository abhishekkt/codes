#include<stdio.h>
#include<string.h>

void revers(char *a)
{ 	int i,j;
	char b[100];
	int len = strlen(a);
	i=len-1;
	j=0;
	printf("\n");
	while(i>=0)
	{
		b[j]=a[i];
		printf("%c",a[i]);
		i--;
		j++;
	}
	b[j]='\0';
	printf("\n%s\n",b);
	int d = strcmp(a,b);
	if(d==0)
	{
		printf("\n palindrome");

	}
	else
	{
		printf("\n not palindrome");
	}
}
int main()
{
	char a[100], b[100],c[100];
	printf("enter the string ");
	scanf("%s",a);
	revers(a);

}
