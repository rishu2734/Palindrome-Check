#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()	{
	int n, revnum=0, rem, orignum;
	clrscr();
	printf("Enter a Number to check whether a number is palindrome number or not\n");
	scanf("%d", &n);
	orignum = n;
	while(n > 0)	{
		rem = n%10;
		revnum = revnum*10 + rem;
		n /=10;
		}

	if (orignum == revnum)	{
		printf("Yes %d is a palindrome number\n", orignum);
		}
	else 	{
		printf("No %d is not a palindrome number\n", orignum);
		}
	getch();
	}