#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,k,n;
clrscr();
printf("enter the array size:");
scanf("%d",&n);
printf("\nEnter the %d element:\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\nOrignal array is:");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
printf("\nNew array is:");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;)
	{
		if(a[j]==a[i])
		{
			for(k=j;k<n;k++)
			{
				a[k]=a[k+1];
			}
			n--;
		}
		else
		{
			j++;
		}
	}
}
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
getch();
}


