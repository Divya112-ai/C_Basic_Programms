#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr,i,n1,n2;
	clrscr();
	printf("Enter the size of array:");
	scanf("%d",&n1);
	ptr=(int *)malloc(n1*sizeof(int));
	printf("Enter the Previously Allocated Memory:\n");
	for(i=0;i<n1;i++)
	{
		printf("%u\n",ptr +i);
	}
	printf("Enter new size of array:");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("Address of newly Allocated Memory:\n");
	for(i=0;i<n2;i++)
	{
		printf("%u\n",ptr+i);
	}
	getch();

}