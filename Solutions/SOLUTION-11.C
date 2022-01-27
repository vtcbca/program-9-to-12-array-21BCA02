/* Write a program to enter any string and find and print the total
number of vowel in it
date:27/1/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[10];
	int i,a=0;
	clrscr();
	printf("Enter any string:");
	gets(s);
	printf("\n Vowels in the string:");
	for(i=0;i<strlen(s);i++)
	{
	 if(s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'||
	 s[i]=='U'|| s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
	 {
	  a++;
	  printf("%c",s[i]);
	 }
	}
	printf("\n Number of vowel in string:%d",a);
	printf("\n");
	getch();
}



