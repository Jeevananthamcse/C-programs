#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n,s;
	clrscr();
	printf("enmter the number :");
	scanf("%d",n);
	for(i=n;i>=1;--i){
	for(s=0;j<n-i;s++)
	printf(" ");
	for(j=i;j<=2*i-1;i++)
	printf("* ");
	for(j=0;j<i-1;j++)
	printf("* ");
	printf("\n");
	}
	getch();
	}