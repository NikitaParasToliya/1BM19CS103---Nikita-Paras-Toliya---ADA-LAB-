//To find distance matrix using Floyd's algorithm

#include <stdio.h>
int a[10][10],d[10][10],n;

int min(int a,int b)
{
 return (a<b?a:b);
}

void floyd()
{
 int i,j,k;
 for (i=0;i<n;i++)
 {
  for (j=0;j<n;j++)
  {
   d[i][j]=a[i][j];
  }
 }
 for (k=0;k<n;k++)
 {
  for (i=0;i<n;i++)
  {
   for (j=0;j<n;j++)
   {
    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
   }
  }
 }
}

int main()
{
 int i,j;
 printf("Enter the number of vertices:\n");
 scanf("%d",&n);
 printf("Enter the adjacency matrix:\n");
 for (i=0;i<n;i++)
 {
  for (j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 floyd();
 printf("The distance matrix:\n");
 for (i=0;i<n;i++)
 {
  for (j=0;j<n;j++)
  {
   printf("%d ",d[i][j]);
  }
  printf("\n");
 }
 return 0;
}
