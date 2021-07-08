#include<stdio.h>
#include<conio.h>
void main(){
	int n,r,s,o;
	clrscr();
	printf("enter the number :");
	scanf("%d",&n);
	o=n;
	s=0;
	while(n>0){
	r=n%10;
	s=s+r*r*r;
	n=n/10;
	}
	if(s==o){
	printf("\n%d is an amstrang number ",o);
	}
	else{
	printf("\n%d is not an amstrang number ",o);
	}
	getch();
	}
fff