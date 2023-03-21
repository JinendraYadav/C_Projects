#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
	int num,prm;
	printf("\nEnter the number for the Prime Number test:");
	scanf("%d",&num);
	if(num==2)
	{
		printf("\nThe Entered0 number is the smallest Prime Number.");
	}
	else if(num<2)
	{
		printf("\nThe Entered Number is neither Prime nor Composite.\nThe Smallest Prime Number is 2.");
	}
	else
	{
		prm=prime(num);
		if(prm==1)
		{
			printf("\nThe given number is Prime ");
		}
		else printf("The given numbers is not Prime");
	}
	getch();
}
int prime(int n)
{
	static int d=2,flag=1;
	if(n==d)
	{
		return 0;
	}
	else
	{
       if(n%d==0)
	   {
		flag=0;
		d++;
	   }
	   else
	   {
         d++;
		 flag=1;
		 prime(n);
	   }
	}
	return(flag);
}