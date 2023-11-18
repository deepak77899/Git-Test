#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},*p;
    int temp,i,j;
    p=a;
    j=4;
    for ( i = 0; i < 5/2; i++)
    {
        temp=a[i];
        a[i]=p[j];
        a[j]=temp;
        j--;
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]); 
}