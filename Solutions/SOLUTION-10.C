/* Write a program and perform sslection sort on array of 10 numerical value
date:27/1/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b,i,j,c,d;
	clrscr();
	printf("Inpute array Elements:");
	scanf("%d",&b);
	printf("\n Enter Array :\n",b);
	for(i=0;i<b;i++)
	{
	 scanf("%d",&a[i]);
	}
	for(i=0;i<b-1;i++)
	{
	 c=i;
	 for(j=i+1;j<b;j++)
	 {
	  if(a[c]>a[j])
	  c=j;
	 }
	 if(c!=i)
	 {
	  d=a[i];
	  a[i]=a[c];
	  a[c]=d;
	 }
       }
       printf("\n Sort list in asscending order:\n");
       for(i=0;i<b;i++)
       {
	printf("\n %d",a[i]);
       }
       getch();
}