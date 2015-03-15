#include<stdio.h>
int po(int c, int spcl)
{ int ans=1;
	int i;
	for(i=0;i<spcl;i++)
	{
		ans = ans*c;
	}
	return ans;
}
int main()
{ int ads;
	int count =0;
  int i,n,c,times;
 int spcl;
   scanf("%d",&n);
  scanf("%d",&times);
  scanf("%d",&spcl);
 for(i=0;i<=times;i++)
 {
  for (c=1;c<n;c++)
  	{  int q = po(c,spcl);
    	if(n%c==0)
    	{  
    		if(n%q!=0)
    		{ 
  			count++;
 	 		}
 	 	}
 
 	}
 	
 	n++;
}
printf("%d",count);
 return(0);
}
