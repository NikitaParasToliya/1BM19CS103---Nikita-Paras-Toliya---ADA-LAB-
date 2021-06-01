#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n=10, i, j, temp,c;
    int arr[10];
    printf("Genrating random nos.:\n");
    srand(time(0));
  for (c = 0; c < n; c++){
    arr[c]=rand()%100 +1;
    printf("%d\t",arr[c]);
  }
    clock_t begin = clock();
    for (i = 1 ; i < n; i++){
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j]){	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("\nSorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++){
        printf("%d\t", arr[i]);
    }
    clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\n\nEXECUTION TIME : %.10fseconds\n", time_spent);
    return 0;
}
