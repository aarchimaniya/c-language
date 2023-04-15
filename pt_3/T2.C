#include<stdio.h>
#include<conio.h>
main()
{
	int a,count=0;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);

	while(a>0)
	{
	     a=a/10;
	     count++;
	}
	printf("total digit=%d",count);
	getch();
}