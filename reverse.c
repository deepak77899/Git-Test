#include<stdio.h>

void main()
{
    int a[1000],n,s=0,r;
    printf("enter size of array\n");
    scanf("%d",&n);

    for (int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
printf("Entered array is:\n");
    for (int i=0; i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("Reverse Array is:");

    r=n-1;

    while (s<n-1)
    {
        int temp=0;
        temp = a[s];
        a[s] =a[r];
        a[r]=temp;
        s++;
        r--;

    }

    for (int i=0; i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    
}