#include<stdio.h>
#include<conio.h>
void main()
{

	 int n,i,f;
	 f=i=1;
	 printf("Enter a number to find f:");
	 scanf("%d",&n);
	 while(i<=n)
	 {

	      f*=i;
	      i++;
	 }
	 printf("the fractional of %d is:%d",n,f);
	 getch();
}





