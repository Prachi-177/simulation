#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k;
float m[2][2],x[1][2],c[1][2];
printf("The standard matrix is:");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%f",&m[i][j]);
	}
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("\t%f",m[i][j]);
	}
printf("\n");
}
printf("\nEnter the matrix of current weather");
for(i=0;i<1;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%f",&x[i][j]);
	}
}
for(i=0;i<1;i++)
{
	for(j=0;j<2;j++)
	{
		printf("\t%f",x[i][j]);
	}
}	
printf("\nThe probability of weather is:");

for(i=0; i<1; i++)
	{
		for(j=0; j<2; j++)
		{
			c[i][j]=0;
			for(k=0; k<2; k++)
			c[i][j]+=x[i][k]*m[k][j];
			
		}
	}
for(i=0;i<1;i++)
{
	for(j=0;j<2;j++)
	{
		printf("\t%f",c[i][j]);
	}
}	
}
