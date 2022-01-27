/* Write a program on bubble sort on array of 10 numeric value
date:27/1/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,b,c;
	clrscr();
	printf("Input the size of array:");
	scanf("%d",&b);
	printf("\n Inpute %d element in the array :\n",b);
	for(i=0;i<b-1;i++)
	{
	 scanf("%d",&a[i]);
	}
	for(i=0;i<b-1;i++)
	{
	 for(j=0;j<b-1;j++)
	  {
	   if(a[j]>a[j+1])
	    {
	     c=a[j];
	     a[j]=a[j+1];
	     a[j+1]=c;
	    }
	  }
	}
	printf("sorted array :");
	for(i=0;i<b;i++)
	{
	 printf("\n%d",a[i]);
	}
	printf("\n\n");
	getch();
}