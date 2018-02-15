#include<stdio.h>
#include<conio.h>
int main()
{
int A[10];
int i , j , b;
 
for(i=0 ; i<10 ; i++)
{
printf(" Enter the Numbers");
scanf("%d" , &A[i] );
}
 
for(i=0 ; i<10 ; i++)
{
for(j=i ; j<10 ; j++)
{
if(A[i] < A[j])
{
b = A[j] ;
A[j] = A[i] ;
A[i] = b ;
}
}
}
 
printf(" Second Largest Number is : %d\n" , A[1] );
getch();
}
