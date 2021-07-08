#include<stdio.h>
#include<conio.h>
void main(){
	int n,month,day;
	clrscr();
	printf("ENTER THE DAYS :");
	scanf("%d",&n);
	month=n/30;
	day=n%30;
	printf("\n\n months=%d \n Days=%d",month,day);
	getch();
	}