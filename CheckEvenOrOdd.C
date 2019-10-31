#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("Enter any number:-");
	scanf("%d", &i);
	if(i%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	getch();
}