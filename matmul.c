#include <stdio.h>
int main()
{
	int m,n,p,q,i,j,k;
	printf("Enter the size of Matrix A :");
	scanf("%d%d",&m,&n);
	printf("Enter the size of matrix B :");
	scanf("%d%d",&p,&q);
	if(n !=p)
	{
		printf("Matrix Multiplication not possible\n");
