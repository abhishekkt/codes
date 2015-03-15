#include<stdio.h>
int main()
{
	int n,a,d,pos,i;
	scanf("%d",&n);
	int asd[n];
	for(i=0;i<n;i++){
		scanf("%d",&asd[i]);}
	a = asd[0];
	if(asd[1]-asd[0]<=asd[2]-asd[1])
	{
		d = asd[1]-asd[0];
	}
	else
	{
		d = asd[2]-asd[1];
	}
	for(i=0;i<=n;i++)
	{
		int ele = a+(i+1-1)*d;
	if(ele == asd[i])
	{
		continue;
	}
	else
	{
		printf("%d",ele);
		break;
	}
}
}