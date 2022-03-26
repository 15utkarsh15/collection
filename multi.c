#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,n,m,p,q;
printf("Enter order of matrix: \n");
scanf("%d%d",&n,&m);
printf("Enter order of matrix: \n");
scanf("%d%d",&p,&q);
if(m!=p)
{
printf("Matrix Multiplication not possible\n");
return 1;
}

printf("Enter elements of matrix a\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter elements of matrix b\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("Resultant matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 1;
}
