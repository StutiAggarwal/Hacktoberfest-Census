#include<stdio.h>
int *prime(int *,int*,int *,int *);
int main()
{
	int m,n,*p,a,d;
	scanf("%d%d",&m,&n);
	scanf("%d",&a);
	p=prime(&m,&n,&a,&d);
	printf("%d",*p);
}
int *prime(int *m,int *n,int *a,int *d)
{
	int count=0,i,j,flag=0;
	for(i=*m;i<=*n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==1)
		flag++;
		if(flag==*a)
		{
			d=&i;
			return d;
		}
		count=0;
	}
}
