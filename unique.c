#include<stdio.h>
#include<string.h>

int unq(char *c)
{	char d[100];
	int i,j,k,alert;
	i=j=0;
	d[i]=c[j];
	i++;
	while(c[j]!='\0')
	{	alert = 0;
		int len = strlen(d);
		for(k=0;k<len;k++)
		{  
			if(c[i]==d[k])
			{	
				alert++;
			}
		}
			if(alert == 0)
			{	j++;
				d[j]=c[i];
				i++;
			}
			else
			{
				i++;
			}			
	}
	printf("%s\n",d);
	int q = strlen(d);
	return q;
}
int main()
{ 
	char c[100];
	printf("enter the string\n");
	scanf("%s",c);
	int no;
	no = unq(c);
	printf("%d\n",no);
	return 0;
}