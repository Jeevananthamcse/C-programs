#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	clrscr();
	printf("enter the two value:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d\nb=%d",a,b);
	getch();
        }
