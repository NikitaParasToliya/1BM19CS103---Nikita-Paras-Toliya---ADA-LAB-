#include<stdio.h>
#include<stdlib.h>
int recLinearSearch(int arr[], int first, int last, int key)
{
     if (first >= last)
        return -1;
     if (arr[first] == key)
        return first+1;
     return recLinearSearch(arr, first+1, last, key);
}

int recursiveBinSearch(int a[],int first,int last,int key)
{
 int mid;
 if(last>=first)
 {
   mid=(first+last)/2;
   if(a[mid]==key)
     return mid+1;
   if(a[mid]>key)
     return recursiveBinSearch(a,first,mid-1,key);
   else
     return recursiveBinSearch(a,mid+1,last,key);
 }
 return -1;
}


 int main()
{
 int i,l,key,ch,linValue,binValue;
 int a[100];
 for(;;)
 {
 printf("1.Linear Search \n2.Binary Search \n3.Exit\n");
 printf("Enter your choice:\n");
 scanf("%d",&ch);
 if(ch==1)
 {
 printf("Enter array size:\n");
 scanf("%d",&l);
 printf("Enter array elements:\n");
 for(i=0;i<l;i++)
   scanf("%d",&a[i]);
 printf("Enter Search element:\n");
 scanf("%d",&key);
}
if(ch==2)
{
	printf("Enter array size:\n");
    scanf("%d",&l);
    printf("Enter the array elements in ascending order\n");
    for(i=0;i<l;i++)
   scanf("%d",&a[i]);
   printf("Enter Search element:\n");
   scanf("%d",&key);
	
}
switch(ch)
{
 case 1: linValue=recLinearSearch(a,0,l,key);
         if(linValue==-1)
            printf("Search element not found\n");
         else
            printf("Search element found at Position %d\n",linValue);
         break;
 case 2: binValue=recursiveBinSearch(a,0,l-1,key);
         if(binValue==-1)
            printf("Search element not found\n");
         else
            printf("Search element found at Position %d\n",binValue);
         break;
 }
}
}


