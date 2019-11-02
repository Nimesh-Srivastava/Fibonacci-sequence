#include<stdio.h>
#include<conio.h>

void fib(int term)
{
	int num[3] = {1,0,0}, i;
	printf("\nFibonacci sequence upto %d terms is :-\n\n",term);
	for(i=0;i<term;i++)
	{
		num[0]+=num[1];
		num[1] = num[2];
		num[2] = num[0];
		printf("%d\t",num[0]);
		if((i+1)%9==0 && i!=0)
		{
			printf("\n\n");
		}
	}
}

void main()
{
	int num;
	clrscr();
	printf("\nEnter the number of terms : ");
	scanf("%d",&num);
	fib(num);
	getch();
}