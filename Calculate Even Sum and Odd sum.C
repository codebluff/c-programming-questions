#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, evensum=0,oddsum=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d", &i);
	for(j=1; j<=i;j++)
	{
		if(i%j ==0)
		{
			evensum += j;
		}
		else
		{
			oddsum +=j;
		}
	}
	printf("Sum of even numbers till %d is %d", i, evensum);
	printf("Sum of odd numbers till %d is %d", i, oddsum);

	getch();
}