#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	printf("enter the a value :");
	scanf("%d",&a);
	printf("enter the b value :");
	scanf("%d",&b);
	printf("enter the c value :");
	scanf("%d",&c);
	if(a>b && a>c){
	printf("a is big");
	}
	if(b>a && b>c){
	printf("b is big");
	}
	if(c>a && c>b){
	printf("c is big");
	}
	if(a==b && a==c){
	printf("a,b and c is are same");
	}

