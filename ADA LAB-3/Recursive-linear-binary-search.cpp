#include<stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start1, start2, end1, end2;
double cpu_time_used1, cpu_time_used2;

int numsArray[12] = {1000, 2000, 5000, 10000, 15000, 20000};

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
 int i,l,key,ch,linValue,binValue,p,q,n;
 int a[100];
 for(;;)
 {
 printf("1.Linear Search \n2.Binary Search \n3.Exit\n");
 printf("Enter your choice:\n");
 scanf("%d",&ch);
 if(ch==1)
  for(l = 0; l < 12; l++)
  {
                printf("number of elements - %d", numsArray[l]);
                n = numsArray[l];
                int arr[n];
                for (int k = 1; k <= n; k++)
                {
                    arr[k] = rand() % 100;
                    
                }
                printf("\nenter element to be found\n");
                scanf("%d", &key);
                start1 = clock();
                int result = recLinearSearch(arr, 0, n - 1, key);
                for (p = 1; p <= 30000; p++)
                    for (q = 1; q <= 20000; q++)
                    {
                    }
                end1 = clock();
                cpu_time_used1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
                (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result);
                printf("time used: %f\n", cpu_time_used1);
    }
            
   else if(ch==2)
   {
            for (l = 0; l < 12; l++)
            {
                printf("number of elements - %d", numsArray[l]);
                n = numsArray[l];
                int arr[n];
                for (int k = 1; k <= n; k++)
                {
                    arr[k] = rand() % 100;
                }
                for (i = 1; i <= n; i++)
                {
                    for (int j = i + 1; j <= n; ++j)
                    {
                        if (arr[i] > arr[j])
                        {
                            int a = arr[i];
                            arr[i] = arr[j];
                            arr[j] = a;
                        }
                    }
                }
                
                printf("\nenter element to be found\n");
                scanf("%d", &key);
                start2 = clock();
                int result = recursiveBinSearch(arr, 0, n - 1, key);
                for (p = 1; p <= 20000; p++)
                    for (q = 1; q <= 20000; q++)
                    {
                    }
                end2 = clock();
                cpu_time_used2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
                (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result);
                printf("time used: %f\n", cpu_time_used2);
            }

           
        }
        else
            break;
    return 0;
}
}

