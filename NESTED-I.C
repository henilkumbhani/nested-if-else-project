#include<stdio.h>
#include<conio.h>

void main()
{

     int a=18,b=17,c=16,d=15;
     clrscr();
     if(a>b)
     {
       if(a>c)
       {
	 if(a>d)
	 {
	   printf("A is maximum");
	 }
	 else
	 {
	   printf("D is maximum");
	 }
     }
      else
     {
	if(c<d)
	 {
	   printf("C is maximum");
	 }
	else
	 {
	   printf("D is maximum");
	 }
      }
    }
    else
    {
      if(b>c)
       {
	if(b>d)
	 {
	   printf("B is maximum");
	 }
	else
	 {
	   printf("D is maximum");
	 }
       }
       else
       {
	 if(c>d)
	 {
	   printf("C is maximum");
	 }
	 else
	 {
	   printf("D is maximum");
	 }
       }
    }
    getch();
}

