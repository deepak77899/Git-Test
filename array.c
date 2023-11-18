#include<stdio.h>
int main()
{int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf("the reversed array is ");
    for(int i=n-1;i>=0;i--)
    printf("%d",arr[i]);
    }