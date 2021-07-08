#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,fact=1;
	clrscr();
	printf("ENTER THE NUMBER :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	fact=fact*i;
	}
	printf("FACTORIAL OF THE GIVEN NUMBER IS %d",fact);
	getch();
	}