/*write a program to input  any string and implement strlen()and
strcmp() in a single program
date:27/1/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[20];
	clrscr();
	printf("Enter first string:");
	gets(s1);
	printf("\nEnter second string:");
	gets(s2);
	if(strcmp(s1,s2)==0)
	{
	 printf("\n You entered the same string two time:");
	}
	else
	{
	 printf("\n You entered string are note same");
	}
	getch();
}