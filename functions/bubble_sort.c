#include <stdio.h>
#define SIZE 10
void bubbleSort(int *, int);   /* passing in a pointer to an int*/
void swap(int *, int *);   /* passing in 2 pointers to int */
main()
{
int i;
/* declaring and initializing my int array */
int a[SIZE] = { 2, 5, 9, 1, 3, 8, 4, 14, 11, 0 };
printf("Data items in original order\n");
for(i=0; i < SIZE; i++)
{
	printf("%4d", a[i]);
}
bubbleSort(a, SIZE);    /* calling sorting function */
printf("\n\nData items in ascending order\n\n");
for(i=0; i < SIZE; i++)
{
	printf("%4d", a[i]);
}

printf("\n");
getchar();
}
void bubbleSort(int *ptr, int n)
{
int i,j;
for(i=0; i < (n-1); i++)
{
    for(j=0; j < (n-i-1); j++)
    {
       	if (ptr[j] > ptr[j+1])
            {
         	swap(&ptr[j], &ptr[j+1]);  /* calling swap function */
	        }
	}
}
}


void swap(int *x, int *y)
{
int temp;
	temp = *x;
   *x = *y;
   *y = temp;
}
