#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],sum=0,j,n;
	float avg;
	clrscr();
	printf("enter how many value you want to give:");
	scanf("%d",&n);
	printf("ENTER THE TEN VALUE \n:");
	for(j=0;j<n;j++){
	scanf("%d",&a[j]);
	}
	printf("\n\n");
	for(j=0;j<n;j++){
	sum=sum+a[j];

	}
	printf("total=%d\n",sum);

	avg=sum / n;
	printf("avg =%f",avg);

	getch();
	}


