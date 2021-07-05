// 2) To find Minimum Spanning tree using Prim's algorithm
#include <stdio.h>
int vis[10],vt[10],et[10][10],e=0,i,j,k,u,v,n,m;
float cost[10][10],sum=0;;

void prims()
{
 int x=0,min;
 vt[x]=0;
 vis[x]=1;
 for (i=0;i<(n-1);i++)
 {
  j=x;
  min=999;
  while (j>=0)
  {
   k=vt[j];
   for (m=1;m<n;m++)
   {
    if (cost[k][m]<min && vis[m]==0)
    {
     min=cost[k][m];
     u=k;
     v=m;
    }
   }
   j--;
  }
  vt[++x]=v;
  et[i][0]=u;
  et[i][1]=v;
  e++;
  vis[v]=1;
  sum=sum+cost[u][v];
 }
}

int main()
{
 printf("Enter the number of vertices:\n");
 scanf("%d",&n);
 printf("Enter the cost adjacency matrix:\n");
 for (i=0;i<n;i++)
 {
  for (j=0;j<n;j++)
  {
   scanf("%f",&cost[i][j]);
  }
 }
 prims();
 printf("\nMinimal spanning tree:\n");
 for (i=0;i<e;i++)
 {
  printf("%d -> %d ",(et[i][0]+1),(et[i][1]+1));
 }
 printf("\nTotal cost is:%f\n",sum);
 return 0;
}
