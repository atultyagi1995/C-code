// summation of series using recursion
#include<stdio.h>
#include<conio.h>
int res(int n);
void main()
{
int sum,n;
printf("enter terms of number\n");
scanf("%d",&n);
printf("%d",res(n));	
getch();
}
int res(int n){
	int sum;
	if(n==0) {
		return 0;
	}
	else{
		return n+res(n-1);
		printf("%d",n);
	}
}
